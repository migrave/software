// Generated by gencpp from file qt_robot_interface/audio_playRequest.msg
// DO NOT EDIT!


#ifndef QT_ROBOT_INTERFACE_MESSAGE_AUDIO_PLAYREQUEST_H
#define QT_ROBOT_INTERFACE_MESSAGE_AUDIO_PLAYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace qt_robot_interface
{
template <class ContainerAllocator>
struct audio_playRequest_
{
  typedef audio_playRequest_<ContainerAllocator> Type;

  audio_playRequest_()
    : filename()
    , filepath()  {
    }
  audio_playRequest_(const ContainerAllocator& _alloc)
    : filename(_alloc)
    , filepath(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  _filename_type filename;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filepath_type;
  _filepath_type filepath;





  typedef boost::shared_ptr< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> const> ConstPtr;

}; // struct audio_playRequest_

typedef ::qt_robot_interface::audio_playRequest_<std::allocator<void> > audio_playRequest;

typedef boost::shared_ptr< ::qt_robot_interface::audio_playRequest > audio_playRequestPtr;
typedef boost::shared_ptr< ::qt_robot_interface::audio_playRequest const> audio_playRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qt_robot_interface::audio_playRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace qt_robot_interface

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "49f2230aca62473845f7a546269c1759";
  }

  static const char* value(const ::qt_robot_interface::audio_playRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x49f2230aca624738ULL;
  static const uint64_t static_value2 = 0x45f7a546269c1759ULL;
};

template<class ContainerAllocator>
struct DataType< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qt_robot_interface/audio_playRequest";
  }

  static const char* value(const ::qt_robot_interface::audio_playRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string filename\n\
string filepath\n\
";
  }

  static const char* value(const ::qt_robot_interface::audio_playRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filename);
      stream.next(m.filepath);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct audio_playRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qt_robot_interface::audio_playRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qt_robot_interface::audio_playRequest_<ContainerAllocator>& v)
  {
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filename);
    s << indent << "filepath: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filepath);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QT_ROBOT_INTERFACE_MESSAGE_AUDIO_PLAYREQUEST_H
