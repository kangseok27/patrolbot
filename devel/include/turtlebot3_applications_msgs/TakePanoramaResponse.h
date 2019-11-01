// Generated by gencpp from file turtlebot3_applications_msgs/TakePanoramaResponse.msg
// DO NOT EDIT!


#ifndef TURTLEBOT3_APPLICATIONS_MSGS_MESSAGE_TAKEPANORAMARESPONSE_H
#define TURTLEBOT3_APPLICATIONS_MSGS_MESSAGE_TAKEPANORAMARESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot3_applications_msgs
{
template <class ContainerAllocator>
struct TakePanoramaResponse_
{
  typedef TakePanoramaResponse_<ContainerAllocator> Type;

  TakePanoramaResponse_()
    : status(0)  {
    }
  TakePanoramaResponse_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TakePanoramaResponse_

typedef ::turtlebot3_applications_msgs::TakePanoramaResponse_<std::allocator<void> > TakePanoramaResponse;

typedef boost::shared_ptr< ::turtlebot3_applications_msgs::TakePanoramaResponse > TakePanoramaResponsePtr;
typedef boost::shared_ptr< ::turtlebot3_applications_msgs::TakePanoramaResponse const> TakePanoramaResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot3_applications_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'turtlebot3_applications_msgs': ['/home/nvidia/catkin_ws/src/turtlebot3_applications_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "284aa12dd9e9e760802ac9f38036ea5e";
  }

  static const char* value(const ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x284aa12dd9e9e760ULL;
  static const uint64_t static_value2 = 0x802ac9f38036ea5eULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot3_applications_msgs/TakePanoramaResponse";
  }

  static const char* value(const ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n\
\n\
";
  }

  static const char* value(const ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TakePanoramaResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot3_applications_msgs::TakePanoramaResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT3_APPLICATIONS_MSGS_MESSAGE_TAKEPANORAMARESPONSE_H
