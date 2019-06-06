#include "/home/kun/catkin_ws/src/single_leg_test/include/single_leg_test/model_test_header.hpp"
//#include "assert.h"

MyRobotSolver::MyRobotSolver()
  : length_of_data(10001),Time_derta(0.001),num_of_joints(3),calculation_iterstions(0)
{
  QPlanned.resize(length_of_data,3);
  QDotPlanned.resize(length_of_data,3);
  QDDotPlanned.resize(length_of_data,3);
  QAcutal.resize(length_of_data,3);
  QDotAcutal.resize(length_of_data,3);
  QDDotAcutal.resize(length_of_data,3);
  TauofIDynamics.resize(length_of_data,3);
  Tauacutal.resize(length_of_data,3);

  VecQAct.resize(3);
  VecQDotAct.resize(3);
  VecQDDotAct.resize(3);
  VecTauAct.resize(3);
  VecTauerror.resize(3);
  VecQerror.resize(3);
  VecQDoterror.resize(3);
}

MyRobotSolver::~MyRobotSolver()
{
  std::cout<<"MyRobotSolver Destroied"<<std::endl;  
}

Model& MyRobotSolver::getModel()
{
  return QuadrupedRobotModel;
}

const MatrixNd& MyRobotSolver::getTau()
{
  return TauofIDynamics;
}

const unsigned int& MyRobotSolver::getnum_of_joints()
{
  return num_of_joints;
}

const double& MyRobotSolver::getTime_derta()
{
  return Time_derta;
}

const MatrixNd& MyRobotSolver::getQDotPlanned()
{
  return QDotPlanned;
}

const MatrixNd& MyRobotSolver::getQPlanned()
{
  return QPlanned;
}

const unsigned int& MyRobotSolver::getlength_of_data()
{
  return length_of_data;
}

const unsigned int& MyRobotSolver::getcalculation_iterations()
{
  return calculation_iterstions;
}

const VectorNd& MyRobotSolver::getVecTauAct()
{
  return VecTauAct;
}

void MyRobotSolver::setvecQAct(unsigned int i, const double value)
{
  VecQAct[i] = value;
}

void MyRobotSolver::setQAcutal(const VectorNd Rowszero)
{
  QAcutal.row(0) = Rowszero.transpose();
}

void MyRobotSolver::setQDotAcutal(const VectorNd Rowszero){
  QDotAcutal.row(0) = Rowszero.transpose();
}

const VectorNd& MyRobotSolver::getVecQAct()
{
  return VecQAct;
}

const MatrixNd& MyRobotSolver::getQAcutal()
{
  return QAcutal;
}
const MatrixNd& MyRobotSolver::getQDotAcutal()
{
  return QDotAcutal;
}
const MatrixNd& MyRobotSolver::getQDDotAcutal()
{
  return QDDotAcutal;
}

const MatrixNd& MyRobotSolver::getTauAcutal()
{
  return Tauacutal;
}

void MyRobotSolver::GetPlannedTorque()
{
  ifstream OpenPlannedtorque;

  OpenPlannedtorque.open("/home/kun/catkin_ws/src/single_leg_test/DataFloder/TauofInversedynamics.txt");
  if (!OpenPlannedtorque.is_open())
  {
      cout << "could not open the TauofInversedynamixcs file" << endl;
      cout << "Program terminating" << endl;
      exit(EXIT_FAILURE);
  }
  unsigned int i = 0;
  for (int i = 0; i < length_of_data; ++i)
  {
      OpenPlannedtorque >> TauofIDynamics(i,0) >> TauofIDynamics(i,1) >> TauofIDynamics(i,2);
  }
  cout << "finish the GetplannedTorque"<<endl;
  OpenPlannedtorque.close();
}

void MyRobotSolver::FileStoreIntoTextFile(const char* filestoredlocation, const MatrixNd& Stored_data)
{
  ofstream fout;
  fout.open(filestoredlocation);
  if (!fout.is_open())
  {
      cout << "could not open the data_generate.txt file" << endl;
      cout << "Program terminating" << endl;
      exit(EXIT_FAILURE);
  }
  for (int i = 0; i < length_of_data; ++i) {
    fout << Stored_data(i,0) << "\t" << Stored_data(i,1) << "\t" << Stored_data(i,2) << endl;
  }
  fout.close();
  cout << "Finish the" << filestoredlocation <<" Data stored" << endl;
}

void MyRobotSolver::model_initialization()
{
    rbdl_check_api_version (RBDL_API_VERSION);

    unsigned int body_a_id, body_b_id, body_c_id;
    Body body_a, body_b, body_c;
    Joint joint_a, joint_b, joint_c;

    QuadrupedRobotModel.gravity = Vector3d (0., 0., -9.81);

    body_a = Body (1.17, Vector3d (0., 0.0128, 0.), Matrix3d(0.00172, 0. , 0., 0., 0.00132, 0., 0., 0., 0.00215 ));//Body (const double &mass, const Math::Vector3d &com, const Math::Matrix3d &inertia_C)
    joint_a = Joint(
        JointTypeRevolute,
        Vector3d (0., 0., 1.)
    );//body_a's mass 1.0, center of mass and the inertia at the center of mass/or the radius gradius.

    Matrix3d B0toB1Rotation = roty(M_PI/2);

    body_a_id = QuadrupedRobotModel.AddBody(0, SpatialTransform(B0toB1Rotation,Vector3d(0., 0., 0.)), joint_a, body_a);
    body_b = Body (3.39, Vector3d (0.114, 0., 0.0594), Matrix3d (0.00302, 0., 0., 0., 0.0269, 0., 0., 0., 0.0285));
        joint_b = Joint (
        JointTypeRevolute,
        Vector3d (0., 0., 1.)
    );
    //pay attention to the transform order of the matrix!!!!!!from the right multiply.
    Matrix3d B1toB2Rotation = rotx(-M_PI/2);
    body_b_id = QuadrupedRobotModel.AddBody(body_a_id, SpatialTransform(B1toB2Rotation,Vector3d(0., 0., 0.1)), joint_b, body_b);

    body_c = Body (1.41, Vector3d (0.0949, 0., -0.00166),Matrix3d (0.000547, 0., 0.000222, 0., 0.0109, 0., 0.000222, 0., 0.0111));
        joint_c = Joint (
        JointTypeRevolute,
        Vector3d (0., 0., 1.)
    );

    body_c_id = QuadrupedRobotModel.AddBody(body_b_id, Xtrans(Vector3d(0.25, 0., 0.1)), joint_c, body_c);
    cout << " the DOF is " << QuadrupedRobotModel.dof_count << endl;
    cout << "Finish the model construction" << endl;
}

void MyRobotSolver::GetLengthofPlannedData()
{

    ifstream OpenPlannedParameters;

    OpenPlannedParameters.open("/home/kun/catkin_ws/src/single_leg_test/DataFloder/PlannedData.txt");
    if (!OpenPlannedParameters.is_open())
    {
        cout << "could not open the PlannedData file" << endl;
        cout << "Program terminating" << endl;
        exit(EXIT_FAILURE);
    }
    unsigned int i = 0;
    for (int i = 0; i < length_of_data; ++i)
    {

        OpenPlannedParameters >> QPlanned(i,0) >> QPlanned(i,1) >> QPlanned(i,2)
                              >> QDotPlanned(i,0) >> QDotPlanned(i,1) >> QDotPlanned(i,2)
                              >> QDDotPlanned(i,0) >> QDDotPlanned(i,1) >>QDDotPlanned(i,2);
     }
    cout << "finish the GetLengthofPlannedData"<<endl;
    OpenPlannedParameters.close();
}

bool MyRobotSolver::IDynamicsCalculation()
{
  VectorNd VecQ = VectorNd::Zero (QuadrupedRobotModel.dof_count);
  VectorNd VecQDot = VectorNd::Zero (QuadrupedRobotModel.dof_count);
  VectorNd VecTau = VectorNd::Zero (QuadrupedRobotModel.dof_count);
  VectorNd VecQDDot = VectorNd::Zero (QuadrupedRobotModel.dof_count);

    for (unsigned int i = 0; i < length_of_data; i++)
    {
        VecQ = QPlanned.row(i).transpose();

        VecQDot = QDotPlanned.row(i).transpose();
        VecQDDot = QDDotPlanned.row(i).transpose();

        InverseDynamics(QuadrupedRobotModel,VecQ,VecQDot,VecQDDot,VecTau);

        TauofIDynamics.row(i).transpose() = VecTau;

    }
    const char* filestoredlocation = "/home/kun/catkin_ws/src/single_leg_test/DataFloder/TauofInversedynamics.txt";
    FileStoreIntoTextFile(filestoredlocation, TauofIDynamics);
    cout <<"finish the Inverse Dynamics calculation" << endl;
    return true;
}

void MyRobotSolver::FDynamicsCalculation()
{
  QAcutal.row(0) = QPlanned.row(0);
  QDotAcutal.row(0) = QDotPlanned.row(0);
  QDDotAcutal.row(0) = QDDotPlanned.row(0);

  double kp = 2;
  double kd = 2;
  for (int i = 0; i < length_of_data - 1 ; ++i) {
    // get the i-th row planned data;
    VecQAct = QAcutal.row(i).transpose();
    VecQDotAct = QDotAcutal.row(i).transpose();

    // get the Tau of the ID and tau error with PD controller;
    VecTauAct = TauofIDynamics.row(i).transpose() + VecTauerror;

    // calculate the acceleration
    ForwardDynamics(QuadrupedRobotModel,VecQAct,VecQDotAct,VecTauAct,VecQDDotAct);

    // stored the acc
    QDDotAcutal.row(i) = VecQDDotAct.transpose();

    // iteration to calculate the actual velocity and position
    QDotAcutal.row(i+1) = QDotAcutal.row(i) + QDDotAcutal.row(i) * Time_derta;
    QAcutal.row(i+1) = QAcutal.row(i) + QDotAcutal.row(i) * Time_derta;

    // Calculate the error of Q and QDot
    VecQerror.transpose() = QPlanned.row(i+1) - QAcutal.row(i+1) ;
    VecQDoterror.transpose() = QDotPlanned.row(i+1) - QDotAcutal.row(i+1);

    // Calculate the torque error with PD controller
    VecTauerror = kp * VecQerror + kd * VecQDoterror;
  }
   // Stored the actual Q;
  cout << "finish the forward dynamics calculation" << endl;

  const char *filestoredlocation = "/home/kun/catkin_ws/src/single_leg_test/DataFloder/PositionofForward.txt";
  FileStoreIntoTextFile(filestoredlocation, QAcutal);

  // Stored the actual QDot;
  filestoredlocation = "/home/kun/catkin_ws/src/single_leg_test/DataFloder/VelocityofForward.txt";
  FileStoreIntoTextFile(filestoredlocation, QDotAcutal);

  // Stored the actual Acceleration
  filestoredlocation = "/home/kun/catkin_ws/src/single_leg_test/DataFloder/AccelerationofForward.txt";
  FileStoreIntoTextFile(filestoredlocation, QDDotAcutal);

}

bool MyRobotSolver::update()
{  
    calculation_iterstions = calculation_iterstions + 1;

    QAcutal.row(calculation_iterstions) = VecQAct.transpose();
    for (int num = 0; num < num_of_joints; ++num) {
      QDotAcutal(calculation_iterstions,num) = (QAcutal(calculation_iterstions,num) - QAcutal(calculation_iterstions - 1, num))/Time_derta;
      QDDotAcutal(calculation_iterstions,num) = (QDotAcutal(calculation_iterstions,num) - QDotAcutal(calculation_iterstions - 1, num))/Time_derta;
     }

    VecQDotAct = QDotAcutal.row(calculation_iterstions).transpose();
    VecQDDotAct = QDDotAcutal.row(calculation_iterstions).transpose();

    InverseDynamics(QuadrupedRobotModel,VecQAct,VecQDotAct,VecQDDotAct,VecTauAct);

    for (int num = 0; num < num_of_joints; ++num) {
      VecTauAct[num] = 2 * (QPlanned(calculation_iterstions,num) - QAcutal(calculation_iterstions,num))
                     + 30* (QDotPlanned(calculation_iterstions,num)-QDotAcutal(calculation_iterstions,num))
                     + VecTauAct[num];
    }

    Tauacutal.row(calculation_iterstions) = VecTauAct.transpose();

    return true;
}
