// Generated by gencpp from file comp0037_mapper/ChangeMapperStateRequest.msg
// DO NOT EDIT!


#ifndef COMP0037_MAPPER_MESSAGE_CHANGEMAPPERSTATEREQUEST_H
#define COMP0037_MAPPER_MESSAGE_CHANGEMAPPERSTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace comp0037_mapper
{
template <class ContainerAllocator>
struct ChangeMapperStateRequest_
{
  typedef ChangeMapperStateRequest_<ContainerAllocator> Type;

  ChangeMapperStateRequest_()
    : enableMapping(false)  {
    }
  ChangeMapperStateRequest_(const ContainerAllocator& _alloc)
    : enableMapping(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enableMapping_type;
  _enableMapping_type enableMapping;





  typedef boost::shared_ptr< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeMapperStateRequest_

typedef ::comp0037_mapper::ChangeMapperStateRequest_<std::allocator<void> > ChangeMapperStateRequest;

typedef boost::shared_ptr< ::comp0037_mapper::ChangeMapperStateRequest > ChangeMapperStateRequestPtr;
typedef boost::shared_ptr< ::comp0037_mapper::ChangeMapperStateRequest const> ChangeMapperStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace comp0037_mapper

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'comp0037_mapper': ['/home/ros_user/Desktop/CW2/src/comp0037/comp0037_mapper/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b54392e4214b88bd2d37f5ea819cc245";
  }

  static const char* value(const ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb54392e4214b88bdULL;
  static const uint64_t static_value2 = 0x2d37f5ea819cc245ULL;
};

template<class ContainerAllocator>
struct DataType< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comp0037_mapper/ChangeMapperStateRequest";
  }

  static const char* value(const ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool enableMapping\n\
";
  }

  static const char* value(const ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enableMapping);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeMapperStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comp0037_mapper::ChangeMapperStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "enableMapping: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enableMapping);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMP0037_MAPPER_MESSAGE_CHANGEMAPPERSTATEREQUEST_H