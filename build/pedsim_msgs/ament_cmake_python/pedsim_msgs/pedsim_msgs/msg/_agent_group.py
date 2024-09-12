# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pedsim_msgs:msg/AgentGroup.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'members'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AgentGroup(type):
    """Metaclass of message 'AgentGroup'."""

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
                'pedsim_msgs.msg.AgentGroup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__agent_group
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__agent_group
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__agent_group
            cls._TYPE_SUPPORT = module.type_support_msg__msg__agent_group
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__agent_group

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AgentGroup(metaclass=Metaclass_AgentGroup):
    """Message class 'AgentGroup'."""

    __slots__ = [
        '_header',
        '_group_id',
        '_age',
        '_members',
        '_center_of_mass',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'group_id': 'uint16',
        'age': 'double',
        'members': 'sequence<uint64>',
        'center_of_mass': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.group_id = kwargs.get('group_id', int())
        self.age = kwargs.get('age', float())
        self.members = array.array('Q', kwargs.get('members', []))
        from geometry_msgs.msg import Pose
        self.center_of_mass = kwargs.get('center_of_mass', Pose())

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
        if self.header != other.header:
            return False
        if self.group_id != other.group_id:
            return False
        if self.age != other.age:
            return False
        if self.members != other.members:
            return False
        if self.center_of_mass != other.center_of_mass:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

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
            assert value >= 0 and value < 65536, \
                "The 'group_id' field must be an unsigned integer in [0, 65535]"
        self._group_id = value

    @builtins.property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'age' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'age' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._age = value

    @builtins.property
    def members(self):
        """Message field 'members'."""
        return self._members

    @members.setter
    def members(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'members' array.array() must have the type code of 'Q'"
            self._members = value
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
                "The 'members' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._members = array.array('Q', value)

    @builtins.property
    def center_of_mass(self):
        """Message field 'center_of_mass'."""
        return self._center_of_mass

    @center_of_mass.setter
    def center_of_mass(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'center_of_mass' field must be a sub message of type 'Pose'"
        self._center_of_mass = value
