// Generated by gencpp from file webots_ros/supervisor_virtual_reality_headset_get_positionResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_POSITIONRESPONSE_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_POSITIONRESPONSE_H


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
struct supervisor_virtual_reality_headset_get_positionResponse_
{
  typedef supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> Type;

  supervisor_virtual_reality_headset_get_positionResponse_()
    : position()  {
    }
  supervisor_virtual_reality_headset_get_positionResponse_(const ContainerAllocator& _alloc)
    : position(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_virtual_reality_headset_get_positionResponse_

typedef ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<std::allocator<void> > supervisor_virtual_reality_headset_get_positionResponse;

typedef boost::shared_ptr< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse > supervisor_virtual_reality_headset_get_positionResponsePtr;
typedef boost::shared_ptr< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse const> supervisor_virtual_reality_headset_get_positionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7bb0ef028c744b081acdc57743b11d8";
  }

  static const char* value(const ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7bb0ef028c744b0ULL;
  static const uint64_t static_value2 = 0x81acdc57743b11d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/supervisor_virtual_reality_headset_get_positionResponse";
  }

  static const char* value(const ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point position\n\
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

  static const char* value(const ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_virtual_reality_headset_get_positionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::supervisor_virtual_reality_headset_get_positionResponse_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_POSITIONRESPONSE_H