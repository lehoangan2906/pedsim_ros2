# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pedsim_msgs:msg/SocialRelation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SocialRelation(type):
    """Metaclass of message 'SocialRelation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_SPATIAL': 'spatial',
        'TYPE_ROMANTIC': 'romantic',
        'TYPE_PARENT_CHILD': 'parent_child',
        'TYPE_FRIENDSHIP': 'friendship',
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
                'pedsim_msgs.msg.SocialRelation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__social_relation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__social_relation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__social_relation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__social_relation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__social_relation

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_SPATIAL': cls.__constants['TYPE_SPATIAL'],
            'TYPE_ROMANTIC': cls.__constants['TYPE_ROMANTIC'],
            'TYPE_PARENT_CHILD': cls.__constants['TYPE_PARENT_CHILD'],
            'TYPE_FRIENDSHIP': cls.__constants['TYPE_FRIENDSHIP'],
        }

    @property
    def TYPE_SPATIAL(self):
        """Message constant 'TYPE_SPATIAL'."""
        return Metaclass_SocialRelation.__constants['TYPE_SPATIAL']

    @property
    def TYPE_ROMANTIC(self):
        """Message constant 'TYPE_ROMANTIC'."""
        return Metaclass_SocialRelation.__constants['TYPE_ROMANTIC']

    @property
    def TYPE_PARENT_CHILD(self):
        """Message constant 'TYPE_PARENT_CHILD'."""
        return Metaclass_SocialRelation.__constants['TYPE_PARENT_CHILD']

    @property
    def TYPE_FRIENDSHIP(self):
        """Message constant 'TYPE_FRIENDSHIP'."""
        return Metaclass_SocialRelation.__constants['TYPE_FRIENDSHIP']


class SocialRelation(metaclass=Metaclass_SocialRelation):
    """
    Message class 'SocialRelation'.

    Constants:
      TYPE_SPATIAL
      TYPE_ROMANTIC
      TYPE_PARENT_CHILD
      TYPE_FRIENDSHIP
    """

    __slots__ = [
        '_type',
        '_strength',
        '_track1_id',
        '_track2_id',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'strength': 'float',
        'track1_id': 'uint32',
        'track2_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.strength = kwargs.get('strength', float())
        self.track1_id = kwargs.get('track1_id', int())
        self.track2_id = kwargs.get('track2_id', int())

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
        if self.type != other.type:
            return False
        if self.strength != other.strength:
            return False
        if self.track1_id != other.track1_id:
            return False
        if self.track2_id != other.track2_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def strength(self):
        """Message field 'strength'."""
        return self._strength

    @strength.setter
    def strength(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'strength' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'strength' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._strength = value

    @builtins.property
    def track1_id(self):
        """Message field 'track1_id'."""
        return self._track1_id

    @track1_id.setter
    def track1_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track1_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'track1_id' field must be an unsigned integer in [0, 4294967295]"
        self._track1_id = value

    @builtins.property
    def track2_id(self):
        """Message field 'track2_id'."""
        return self._track2_id

    @track2_id.setter
    def track2_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track2_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'track2_id' field must be an unsigned integer in [0, 4294967295]"
        self._track2_id = value
