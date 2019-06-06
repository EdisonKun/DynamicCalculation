#include "ros/ros.h"
#include "custom_srv_service/custom_srv.h"
#include <cstdlib>

int main(int argc, char **argv)
{
  /**
   * @brief ros::init
   * custom_srv_client: ros_node name, specific in ros system.
   * If you want to have multi same node name, using the init_options::AnonymousName.
   */
  ros::init(argc, argv, "custom_srv_client");
  if (argc != 3){
    ROS_INFO("usage: rosrun package_name executable_name arguments");
    return 1;
  }

  ros::NodeHandle nh;
  ros::ServiceClient client = nh.serviceClient<custom_srv_service::custom_srv>("add_two_ints");

  custom_srv_service::custom_srv srv;
  /**
    atol, long atol(const char *nptr);
    */
  srv.request.a = atol(argv[1]);
  srv.request.b = atol(argv[2]);

  if (client.call(srv)){
    ROS_INFO("with the given [%ld] and [%ld],the sum is: [%ld]", srv.request.a, srv.request.b, (long int)srv.response.sum);
  }
  else{
    ROS_ERROR("Failed to call service: add_two_ints");
    return 1;
  }
  return 0;
}
