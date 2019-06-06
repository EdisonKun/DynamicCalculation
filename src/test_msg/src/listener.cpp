#include "ros/ros.h"
#include "std_msgs/String.h"
#include <test_msg/Test.h>
#include <vector>

void chatterCallback(const test_msg::Test::ConstPtr msg)
{
  ROS_INFO("I heard :[%s], I heard the vel :[%f]", msg->name,msg->vel);
  std::cout << "the pose is " << msg->pose.position.x << std::endl;
}

int main(int argc, char *argv[])
{
  ros::init(argc,argv,"listener");

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("chatter",1000,chatterCallback);

  ros::spin();


  return 0;
}
