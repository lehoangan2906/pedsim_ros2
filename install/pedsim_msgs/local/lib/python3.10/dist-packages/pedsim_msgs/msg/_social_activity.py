# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pedsim_msgs:msg/SocialActivity.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'track_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SocialActivity(type):
    """Metaclass of message 'SocialActivity'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_SHOPPING': 'shopping',
        'TYPE_STANDING': 'standing',
        'TYPE_INDIVIDUAL_MOVING': 'individual_moving',
        'TYPE_WAITING_IN_QUEUE': 'waiting_in_queue',
        'TYPE_LOOKING_AT_INFORMATION_SCREEN': 'looking_at_information_screen',
        'TYPE_LOOKING_AT_KIOSK': 'looking_at_kiosk',
        'TYPE_GROUP_ASSEMBLING': 'group_assembling',
        'TYPE_GROUP_MOVING': 'group_moving',
        'TYPE_FLOW_WITH_ROBOT': 'flow',
        'TYPE_ANTIFLOW_AGAINST_ROBOT': 'antiflow',
        'TYPE_WAITING_FOR_OTHERS': 'waiting_for_others',
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
                'pedsim_msgs.msg.SocialActivity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__social_activity
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__social_activity
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__social_activity
            cls._TYPE_SUPPORT = module.type_support_msg__msg__social_activity
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__social_activity

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_SHOPPING': cls.__constants['TYPE_SHOPPING'],
            'TYPE_STANDING': cls.__constants['TYPE_STANDING'],
            'TYPE_INDIVIDUAL_MOVING': cls.__constants['TYPE_INDIVIDUAL_MOVING'],
            'TYPE_WAITING_IN_QUEUE': cls.__constants['TYPE_WAITING_IN_QUEUE'],
            'TYPE_LOOKING_AT_INFORMATION_SCREEN': cls.__constants['TYPE_LOOKING_AT_INFORMATION_SCREEN'],
            'TYPE_LOOKING_AT_KIOSK': cls.__constants['TYPE_LOOKING_AT_KIOSK'],
            'TYPE_GROUP_ASSEMBLING': cls.__constants['TYPE_GROUP_ASSEMBLING'],
            'TYPE_GROUP_MOVING': cls.__constants['TYPE_GROUP_MOVING'],
            'TYPE_FLOW_WITH_ROBOT': cls.__constants['TYPE_FLOW_WITH_ROBOT'],
            'TYPE_ANTIFLOW_AGAINST_ROBOT': cls.__constants['TYPE_ANTIFLOW_AGAINST_ROBOT'],
            'TYPE_WAITING_FOR_OTHERS': cls.__constants['TYPE_WAITING_FOR_OTHERS'],
        }

    @property
    def TYPE_SHOPPING(self):
        """Message constant 'TYPE_SHOPPING'."""
        return Metaclass_SocialActivity.__constants['TYPE_SHOPPING']

    @property
    def TYPE_STANDING(self):
        """Message constant 'TYPE_STANDING'."""
        return Metaclass_SocialActivity.__constants['TYPE_STANDING']

    @property
    def TYPE_INDIVIDUAL_MOVING(self):
        """Message constant 'TYPE_INDIVIDUAL_MOVING'."""
        return Metaclass_SocialActivity.__constants['TYPE_INDIVIDUAL_MOVING']

    @property
    def TYPE_WAITING_IN_QUEUE(self):
        """Message constant 'TYPE_WAITING_IN_QUEUE'."""
        return Metaclass_SocialActivity.__constants['TYPE_WAITING_IN_QUEUE']

    @property
    def TYPE_LOOKING_AT_INFORMATION_SCREEN(self):
        """Message constant 'TYPE_LOOKING_AT_INFORMATION_SCREEN'."""
        return Metaclass_SocialActivity.__constants['TYPE_LOOKING_AT_INFORMATION_SCREEN']

    @property
    def TYPE_LOOKING_AT_KIOSK(self):
        """Message constant 'TYPE_LOOKING_AT_KIOSK'."""
        return Metaclass_SocialActivity.__constants['TYPE_LOOKING_AT_KIOSK']

    @property
    def TYPE_GROUP_ASSEMBLING(self):
        """Message constant 'TYPE_GROUP_ASSEMBLING'."""
        return Metaclass_SocialActivity.__constants['TYPE_GROUP_ASSEMBLING']

    @property
    def TYPE_GROUP_MOVING(self):
        """Message constant 'TYPE_GROUP_MOVING'."""
        return Metaclass_SocialActivity.__constants['TYPE_GROUP_MOVING']

    @property
    def TYPE_FLOW_WITH_ROBOT(self):
        """Message constant 'TYPE_FLOW_WITH_ROBOT'."""
        return Metaclass_SocialActivity.__constants['TYPE_FLOW_WITH_ROBOT']

    @property
    def TYPE_ANTIFLOW_AGAINST_ROBOT(self):
        """Message constant 'TYPE_ANTIFLOW_AGAINST_ROBOT'."""
        return Metaclass_SocialActivity.__constants['TYPE_ANTIFLOW_AGAINST_ROBOT']

    @property
    def TYPE_WAITING_FOR_OTHERS(self):
        """Message constant 'TYPE_WAITING_FOR_OTHERS'."""
        return Metaclass_SocialActivity.__constants['TYPE_WAITING_FOR_OTHERS']


class SocialActivity(metaclass=Metaclass_SocialActivity):
    """
    Message class 'SocialActivity'.

    Constants:
      TYPE_SHOPPING
      TYPE_STANDING
      TYPE_INDIVIDUAL_MOVING
      TYPE_WAITING_IN_QUEUE
      TYPE_LOOKING_AT_INFORMATION_SCREEN
      TYPE_LOOKING_AT_KIOSK
      TYPE_GROUP_ASSEMBLING
      TYPE_GROUP_MOVING
      TYPE_FLOW_WITH_ROBOT
      TYPE_ANTIFLOW_AGAINST_ROBOT
      TYPE_WAITING_FOR_OTHERS
    """

    __slots__ = [
        '_type',
        '_confidence',
        '_track_ids',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'confidence': 'float',
        'track_ids': 'sequence<uint64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.confidence = kwargs.get('confidence', float())
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
        if self.type != other.type:
            return False
        if self.confidence != other.confidence:
            return False
        if self.track_ids != other.track_ids:
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
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

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
