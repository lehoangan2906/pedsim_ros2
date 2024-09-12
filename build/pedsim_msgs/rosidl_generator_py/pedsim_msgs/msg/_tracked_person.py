# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pedsim_msgs:msg/TrackedPerson.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedPerson(type):
    """Metaclass of message 'TrackedPerson'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pedsim_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pedsim_msgs.msg.TrackedPerson')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_person
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_person
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_person
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_person
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_person

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrackedPerson(metaclass=Metaclass_TrackedPerson):
    """Message class 'TrackedPerson'."""

    __slots__ = [
        '_track_id',
        '_is_occluded',
        '_is_matched',
        '_detection_id',
        '_age',
        '_pose',
        '_twist',
    ]

    _fields_and_field_types = {
        'track_id': 'uint64',
        'is_occluded': 'boolean',
        'is_matched': 'boolean',
        'detection_id': 'uint64',
        'age': 'builtin_interfaces/Duration',
        'pose': 'geometry_msgs/PoseWithCovariance',
        'twist': 'geometry_msgs/TwistWithCovariance',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.track_id = kwargs.get('track_id', int())
        self.is_occluded = kwargs.get('is_occluded', bool())
        self.is_matched = kwargs.get('is_matched', bool())
        self.detection_id = kwargs.get('detection_id', int())
        from builtin_interfaces.msg import Duration
        self.age = kwargs.get('age', Duration())
        from geometry_msgs.msg import PoseWithCovariance
        self.pose = kwargs.get('pose', PoseWithCovariance())
        from geometry_msgs.msg import TwistWithCovariance
        self.twist = kwargs.get('twist', TwistWithCovariance())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.track_id != other.track_id:
            return False
        if self.is_occluded != other.is_occluded:
            return False
        if self.is_matched != other.is_matched:
            return False
        if self.detection_id != other.detection_id:
            return False
        if self.age != other.age:
            return False
        if self.pose != other.pose:
            return False
        if self.twist != other.twist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def track_id(self):
        """Message field 'track_id'."""
        return self._track_id

    @track_id.setter
    def track_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'track_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._track_id = value

    @builtins.property
    def is_occluded(self):
        """Message field 'is_occluded'."""
        return self._is_occluded

    @is_occluded.setter
    def is_occluded(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_occluded' field must be of type 'bool'"
        self._is_occluded = value

    @builtins.property
    def is_matched(self):
        """Message field 'is_matched'."""
        return self._is_matched

    @is_matched.setter
    def is_matched(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_matched' field must be of type 'bool'"
        self._is_matched = value

    @builtins.property
    def detection_id(self):
        """Message field 'detection_id'."""
        return self._detection_id

    @detection_id.setter
    def detection_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detection_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'detection_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._detection_id = value

    @builtins.property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'age' field must be a sub message of type 'Duration'"
        self._age = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'pose' field must be a sub message of type 'PoseWithCovariance'"
        self._pose = value

    @builtins.property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'twist' field must be a sub message of type 'TwistWithCovariance'"
        self._twist = value
