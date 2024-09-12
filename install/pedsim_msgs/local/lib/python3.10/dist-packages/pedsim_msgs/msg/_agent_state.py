# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pedsim_msgs:msg/AgentState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AgentState(type):
    """Metaclass of message 'AgentState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_STANDING': 'standing',
        'TYPE_INDIVIDUAL_MOVING': 'individual_moving',
        'TYPE_WAITING_IN_QUEUE': 'waiting_in_queue',
        'TYPE_GROUP_MOVING': 'group_moving',
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
                'pedsim_msgs.msg.AgentState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__agent_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__agent_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__agent_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__agent_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__agent_state

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from pedsim_msgs.msg import AgentForce
            if AgentForce.__class__._TYPE_SUPPORT is None:
                AgentForce.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_STANDING': cls.__constants['TYPE_STANDING'],
            'TYPE_INDIVIDUAL_MOVING': cls.__constants['TYPE_INDIVIDUAL_MOVING'],
            'TYPE_WAITING_IN_QUEUE': cls.__constants['TYPE_WAITING_IN_QUEUE'],
            'TYPE_GROUP_MOVING': cls.__constants['TYPE_GROUP_MOVING'],
        }

    @property
    def TYPE_STANDING(self):
        """Message constant 'TYPE_STANDING'."""
        return Metaclass_AgentState.__constants['TYPE_STANDING']

    @property
    def TYPE_INDIVIDUAL_MOVING(self):
        """Message constant 'TYPE_INDIVIDUAL_MOVING'."""
        return Metaclass_AgentState.__constants['TYPE_INDIVIDUAL_MOVING']

    @property
    def TYPE_WAITING_IN_QUEUE(self):
        """Message constant 'TYPE_WAITING_IN_QUEUE'."""
        return Metaclass_AgentState.__constants['TYPE_WAITING_IN_QUEUE']

    @property
    def TYPE_GROUP_MOVING(self):
        """Message constant 'TYPE_GROUP_MOVING'."""
        return Metaclass_AgentState.__constants['TYPE_GROUP_MOVING']


class AgentState(metaclass=Metaclass_AgentState):
    """
    Message class 'AgentState'.

    Constants:
      TYPE_STANDING
      TYPE_INDIVIDUAL_MOVING
      TYPE_WAITING_IN_QUEUE
      TYPE_GROUP_MOVING
    """

    __slots__ = [
        '_header',
        '_id',
        '_type',
        '_social_state',
        '_pose',
        '_twist',
        '_forces',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'uint64',
        'type': 'uint16',
        'social_state': 'string',
        'pose': 'geometry_msgs/Pose',
        'twist': 'geometry_msgs/Twist',
        'forces': 'pedsim_msgs/AgentForce',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pedsim_msgs', 'msg'], 'AgentForce'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.social_state = kwargs.get('social_state', str())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Twist
        self.twist = kwargs.get('twist', Twist())
        from pedsim_msgs.msg import AgentForce
        self.forces = kwargs.get('forces', AgentForce())

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
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.social_state != other.social_state:
            return False
        if self.pose != other.pose:
            return False
        if self.twist != other.twist:
            return False
        if self.forces != other.forces:
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

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'type' field must be an unsigned integer in [0, 65535]"
        self._type = value

    @builtins.property
    def social_state(self):
        """Message field 'social_state'."""
        return self._social_state

    @social_state.setter
    def social_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'social_state' field must be of type 'str'"
        self._social_state = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'twist' field must be a sub message of type 'Twist'"
        self._twist = value

    @builtins.property
    def forces(self):
        """Message field 'forces'."""
        return self._forces

    @forces.setter
    def forces(self, value):
        if __debug__:
            from pedsim_msgs.msg import AgentForce
            assert \
                isinstance(value, AgentForce), \
                "The 'forces' field must be a sub message of type 'AgentForce'"
        self._forces = value
