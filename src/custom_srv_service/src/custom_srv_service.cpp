#include "ros/ros.h"
#include "custom_srv_service/custom_srv.h"
#include <sstream>
#include <string>
/**
 * @brief add
 * @param req
 * @param res
 * @return
 * 这个函数提供两个int值求和的服务，int值从request里面获取，
 * 而返回数据装入response内，这些数据类型都定义在srv文件内部，函数返回一个boolean值。
  */
 bool add(custom_srv_service::custom_srv::Request  &req,
          custom_srv_service::custom_srv::Response &res)
 {
   res.sum = req.a + req.b;
   ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
   ROS_INFO("sending back response: [%ld]", (long int)res.sum);
   return true;
 }

 int main(int argc, char **argv)
 {
   ros::init(argc, argv, "custom_srv_server");

   ros::NodeHandle nh;
   /**
    * @brief service
    *the first parameter is service name; the second is the service type, defined
    * by a function to manipulate struct stored in the header file.
    */
   ros::ServiceServer service = nh.advertiseService("add_two_ints", add);

   ROS_INFO("Ready to add two ints!");
   ros::spin();

   return 0;
 }
