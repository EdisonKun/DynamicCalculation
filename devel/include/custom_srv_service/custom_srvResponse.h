// Generated by gencpp from file custom_srv_service/custom_srvResponse.msg
// DO NOT EDIT!


#ifndef CUSTOM_SRV_SERVICE_MESSAGE_CUSTOM_SRVRESPONSE_H
#define CUSTOM_SRV_SERVICE_MESSAGE_CUSTOM_SRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace custom_srv_service
{
template <class ContainerAllocator>
struct custom_srvResponse_
{
  typedef custom_srvResponse_<ContainerAllocator> Type;

  custom_srvResponse_()
    : sum(0)  {
    }
  custom_srvResponse_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int64_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct custom_srvResponse_

typedef ::custom_srv_service::custom_srvResponse_<std::allocator<void> > custom_srvResponse;

typedef boost::shared_ptr< ::custom_srv_service::custom_srvResponse > custom_srvResponsePtr;
typedef boost::shared_ptr< ::custom_srv_service::custom_srvResponse const> custom_srvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_srv_service::custom_srvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace custom_srv_service

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b88405221c77b1878a3cbbfff53428d7";
  }

  static const char* value(const ::custom_srv_service::custom_srvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb88405221c77b187ULL;
  static const uint64_t static_value2 = 0x8a3cbbfff53428d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_srv_service/custom_srvResponse";
  }

  static const char* value(const ::custom_srv_service::custom_srvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 sum\n\
\n\
";
  }

  static const char* value(const ::custom_srv_service::custom_srvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct custom_srvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_srv_service::custom_srvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_srv_service::custom_srvResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int64_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_SRV_SERVICE_MESSAGE_CUSTOM_SRVRESPONSE_H