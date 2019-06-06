// Generated by gencpp from file webots_ros/node_get_center_of_massResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_CENTER_OF_MASSRESPONSE_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_CENTER_OF_MASSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace webots_ros
{
template <class ContainerAllocator>
struct node_get_center_of_massResponse_
{
  typedef node_get_center_of_massResponse_<ContainerAllocator> Type;

  node_get_center_of_massResponse_()
    : centerOfMass()  {
    }
  node_get_center_of_massResponse_(const ContainerAllocator& _alloc)
    : centerOfMass(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _centerOfMass_type;
  _centerOfMass_type centerOfMass;





  typedef boost::shared_ptr< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_center_of_massResponse_

typedef ::webots_ros::node_get_center_of_massResponse_<std::allocator<void> > node_get_center_of_massResponse;

typedef boost::shared_ptr< ::webots_ros::node_get_center_of_massResponse > node_get_center_of_massResponsePtr;
typedef boost::shared_ptr< ::webots_ros::node_get_center_of_massResponse const> node_get_center_of_massResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace webots_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'webots_ros': ['/home/kun/catkin_ws/src/webots_ros/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e70727e623e5dc1b6f64942e8b4ec566";
  }

  static const char* value(const ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe70727e623e5dc1bULL;
  static const uint64_t static_value2 = 0x6f64942e8b4ec566ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/node_get_center_of_massResponse";
  }

  static const char* value(const ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point centerOfMass\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.centerOfMass);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_center_of_massResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::node_get_center_of_massResponse_<ContainerAllocator>& v)
  {
    s << indent << "centerOfMass: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.centerOfMass);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_CENTER_OF_MASSRESPONSE_H