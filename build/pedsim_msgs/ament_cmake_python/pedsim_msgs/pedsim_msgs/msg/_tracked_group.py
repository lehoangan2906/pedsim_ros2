# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pedsim_msgs:msg/TrackedGroup.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'track_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedGroup(type):
    """Metaclass of message 'TrackedGroup'."""

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
                'pedsim_msgs.msg.TrackedGroup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_group
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_group
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_group
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_group
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_group

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrackedGroup(metaclass=Metaclass_TrackedGroup):
    """Message class 'TrackedGroup'."""

    __slots__ = [
        '_group_id',
        '_age',
        '_center_of_gravity',
        '_track_ids',
    ]

    _fields_and_field_types = {
        'group_id': 'uint64',
        'age': 'builtin_interfaces/Duration',
        'center_of_gravity': 'geometry_msgs/PoseWithCovariance',
        'track_ids': 'sequence<uint64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.group_id = kwargs.get('group_id', int())
        from builtin_interfaces.msg import Duration
        self.age = kwargs.get('age', Duration())
        from geometry_msgs.msg import PoseWithCovariance
        self.center_of_gravity = kwargs.get('center_of_gravity', PoseWithCovariance())
        self.track_ids = array.array('Q', kwargs.get('track_ids', []))

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
        if self.group_id != other.group_id:
            return False
        if self.age != other.age:
            return False
        if self.center_of_gravity != other.center_of_gravity:
            return False
        if self.track_ids != other.track_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def group_id(self):
        """Message field 'group_id'."""
        return self._group_id

    @group_id.setter
    def group_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'group_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._group_id = value

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
    def center_of_gravity(self):
        """Message field 'center_of_gravity'."""
        return self._center_of_gravity

    @center_of_gravity.setter
    def center_of_gravity(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'center_of_gravity' field must be a sub message of type 'PoseWithCovariance'"
        self._center_of_gravity = value

    @builtins.property
    def track_ids(self):
        """Message field 'track_ids'."""
        return self._track_ids

    @track_ids.setter
    def track_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'track_ids' array.array() must have the type code of 'Q'"
            self._track_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'track_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._track_ids = array.array('Q', value)
