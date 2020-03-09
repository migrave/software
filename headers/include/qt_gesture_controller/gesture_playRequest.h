// Generated by gencpp from file qt_gesture_controller/gesture_playRequest.msg
// DO NOT EDIT!


#ifndef QT_GESTURE_CONTROLLER_MESSAGE_GESTURE_PLAYREQUEST_H
#define QT_GESTURE_CONTROLLER_MESSAGE_GESTURE_PLAYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace qt_gesture_controller
{
template <class ContainerAllocator>
struct gesture_playRequest_
{
  typedef gesture_playRequest_<ContainerAllocator> Type;

  gesture_playRequest_()
    : name()
    , speed(0.0)  {
    }
  gesture_playRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , speed(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef float _speed_type;
  _speed_type speed;





  typedef boost::shared_ptr< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> const> ConstPtr;

}; // struct gesture_playRequest_

typedef ::qt_gesture_controller::gesture_playRequest_<std::allocator<void> > gesture_playRequest;

typedef boost::shared_ptr< ::qt_gesture_controller::gesture_playRequest > gesture_playRequestPtr;
typedef boost::shared_ptr< ::qt_gesture_controller::gesture_playRequest const> gesture_playRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace qt_gesture_controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "731354329381c2f16be8e48fe990ad74";
  }

  static const char* value(const ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x731354329381c2f1ULL;
  static const uint64_t static_value2 = 0x6be8e48fe990ad74ULL;
};

template<class ContainerAllocator>
struct DataType< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qt_gesture_controller/gesture_playRequest";
  }

  static const char* value(const ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
float32 speed\n\
";
  }

  static const char* value(const ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gesture_playRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qt_gesture_controller::gesture_playRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QT_GESTURE_CONTROLLER_MESSAGE_GESTURE_PLAYREQUEST_H
