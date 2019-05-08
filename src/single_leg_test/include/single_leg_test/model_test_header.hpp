#ifndef MODEL_TEST_HEADER_HPP
#define MODEL_TEST_HEADER_HPP
#include <rbdl/rbdl.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "eigen3/Eigen/Core"

using namespace std;
using namespace RigidBodyDynamics;
using namespace RigidBodyDynamics::Math;
#define PI acos(-1)

class MyRobotSolver
{
public:
    MyRobotSolver();
    ~MyRobotSolver();
    void GetLengthofPlannedData();//get the length of the planned data;
    void GetPlannedTorque();
    void model_initialization();//initialization of a model;
    bool IDynamicsCalculation();//Calculate the torque by inverse dynamics.
    Model& getModel();
    const MatrixNd& getTau();
    const MatrixNd& getQPlanned();
    const double& getTime_derta();
    const MatrixNd& getQDotPlanned();
    const unsigned int& getlength_of_data();
    const unsigned int& getnum_of_joints();
    const unsigned int& getcalculation_iterations();
    void setvecQAct(unsigned int i, const double value);
    void setQAcutal(const VectorNd Rowszero);
    void setQDotAcutal(const VectorNd Rowszero);
    const VectorNd& getVecQAct();
    const VectorNd& getVecTauAct();
    const MatrixNd& getQAcutal();
    const MatrixNd& getQDotAcutal();
    const MatrixNd& getQDDotAcutal();
    const MatrixNd& getTauAcutal();

    void FDynamicsCalculation();//Calculate the forward dynamic with PD controller
    void FileStoreIntoTextFile(const char *filestoredlocation, const MatrixNd & Stored_data);
    bool update();
protected:
    MatrixNd QPlanned, QDotPlanned, QDDotPlanned;
    MatrixNd TauofIDynamics;
    unsigned int length_of_data;
    unsigned int calculation_iterstions;
    unsigned int num_of_joints;
    MatrixNd QAcutal, QDotAcutal, QDDotAcutal,Tauacutal;
    Model QuadrupedRobotModel;
    double Time_derta;
    VectorNd VecQAct, VecQDotAct, VecQDDotAct, VecTauAct;
    VectorNd VecTauerror, VecQerror, VecQDoterror;

};

#endif
