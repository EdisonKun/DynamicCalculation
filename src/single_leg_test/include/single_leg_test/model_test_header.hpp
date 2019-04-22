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
    void model_initialization();//initialization of a model;
    bool IDynamicsCalculation();//Calculate the torque by inverse dynamics.
    const Model& getModel();
    const MatrixNd& getTau();
    const MatrixNd& getQPlanned();
    const MatrixNd& getQDotPlanned();
    void FDynamicsCalculation();//Calculate the forward dynamic with PD controller
    void FileStoreIntoTextFile(const char *filestoredlocation, const MatrixNd & Stored_data);


private:
    unsigned int length_of_data;
    MatrixNd QPlanned, QDotPlanned, QDDotPlanned;
    MatrixNd TauofIDynamics;    
    MatrixNd QAcutal, QDotAcutal, QDDotAcutal;
    Model QuadrupedRobotModel;
    double Time_derta;
    VectorNd VecQAct, VecQDotAct, VecQDDotAct, VecTauAct;
    VectorNd VecTauerror, VecQerror, VecQDoterror;

};

#endif
