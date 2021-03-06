// Generated by gencpp from file buchanan_runtime_monitoring/average.msg
// DO NOT EDIT!


#ifndef BUCHANAN_RUNTIME_MONITORING_MESSAGE_AVERAGE_H
#define BUCHANAN_RUNTIME_MONITORING_MESSAGE_AVERAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace buchanan_runtime_monitoring
{
template <class ContainerAllocator>
struct average_
{
  typedef average_<ContainerAllocator> Type;

  average_()
    : average(0.0)  {
    }
  average_(const ContainerAllocator& _alloc)
    : average(0.0)  {
  (void)_alloc;
    }



   typedef float _average_type;
  _average_type average;





  typedef boost::shared_ptr< ::buchanan_runtime_monitoring::average_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::buchanan_runtime_monitoring::average_<ContainerAllocator> const> ConstPtr;

}; // struct average_

typedef ::buchanan_runtime_monitoring::average_<std::allocator<void> > average;

typedef boost::shared_ptr< ::buchanan_runtime_monitoring::average > averagePtr;
typedef boost::shared_ptr< ::buchanan_runtime_monitoring::average const> averageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::buchanan_runtime_monitoring::average_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::buchanan_runtime_monitoring::average_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace buchanan_runtime_monitoring

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'buchanan_runtime_monitoring': ['/home/michaela/catkin_ws/src/buchanan_runtime_monitoring/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::buchanan_runtime_monitoring::average_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::buchanan_runtime_monitoring::average_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::buchanan_runtime_monitoring::average_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::buchanan_runtime_monitoring::average_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::buchanan_runtime_monitoring::average_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::buchanan_runtime_monitoring::average_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::buchanan_runtime_monitoring::average_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26f1aeb3d6aa6d8e4617861692487d73";
  }

  static const char* value(const ::buchanan_runtime_monitoring::average_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26f1aeb3d6aa6d8eULL;
  static const uint64_t static_value2 = 0x4617861692487d73ULL;
};

template<class ContainerAllocator>
struct DataType< ::buchanan_runtime_monitoring::average_<ContainerAllocator> >
{
  static const char* value()
  {
    return "buchanan_runtime_monitoring/average";
  }

  static const char* value(const ::buchanan_runtime_monitoring::average_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::buchanan_runtime_monitoring::average_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 average\n\
";
  }

  static const char* value(const ::buchanan_runtime_monitoring::average_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::buchanan_runtime_monitoring::average_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.average);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct average_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::buchanan_runtime_monitoring::average_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::buchanan_runtime_monitoring::average_<ContainerAllocator>& v)
  {
    s << indent << "average: ";
    Printer<float>::stream(s, indent + "  ", v.average);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BUCHANAN_RUNTIME_MONITORING_MESSAGE_AVERAGE_H
