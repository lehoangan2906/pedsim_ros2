# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pedsim_msgs:msg/AgentForce.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AgentForce(type):
    """Metaclass of message 'AgentForce'."""

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
                'pedsim_msgs.msg.AgentForce')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__agent_force
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__agent_force
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__agent_force
            cls._TYPE_SUPPORT = module.type_support_msg__msg__agent_force
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__agent_force

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AgentForce(metaclass=Metaclass_AgentForce):
    """Message class 'AgentForce'."""

    __slots__ = [
        '_desired_force',
        '_obstacle_force',
        '_social_force',
        '_group_coherence_force',
        '_group_gaze_force',
        '_group_repulsion_force',
        '_random_force',
    ]

    _fields_and_field_types = {
        'desired_force': 'geometry_msgs/Vector3',
        'obstacle_force': 'geometry_msgs/Vector3',
        'social_force': 'geometry_msgs/Vector3',
        'group_coherence_force': 'geometry_msgs/Vector3',
        'group_gaze_force': 'geometry_msgs/Vector3',
        'group_repulsion_force': 'geometry_msgs/Vector3',
        'random_force': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Vector3
        self.desired_force = kwargs.get('desired_force', Vector3())
        from geometry_msgs.msg import Vector3
        self.obstacle_force = kwargs.get('obstacle_force', Vector3())
        from geometry_msgs.msg import Vector3
        self.social_force = kwargs.get('social_force', Vector3())
        from geometry_msgs.msg import Vector3
        self.group_coherence_force = kwargs.get('group_coherence_force', Vector3())
        from geometry_msgs.msg import Vector3
        self.group_gaze_force = kwargs.get('group_gaze_force', Vector3())
        from geometry_msgs.msg import Vector3
        self.group_repulsion_force = kwargs.get('group_repulsion_force', Vector3())
        from geometry_msgs.msg import Vector3
        self.random_force = kwargs.get('random_force', Vector3())

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
        if self.desired_force != other.desired_force:
            return False
        if self.obstacle_force != other.obstacle_force:
            return False
        if self.social_force != other.social_force:
            return False
        if self.group_coherence_force != other.group_coherence_force:
            return False
        if self.group_gaze_force != other.group_gaze_force:
            return False
        if self.group_repulsion_force != other.group_repulsion_force:
            return False
        if self.random_force != other.random_force:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def desired_force(self):
        """Message field 'desired_force'."""
        return self._desired_force

    @desired_force.setter
    def desired_force(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'desired_force' field must be a sub message of type 'Vector3'"
        self._desired_force = value

    @builtins.property
    def obstacle_force(self):
        """Message field 'obstacle_force'."""
        return self._obstacle_force

    @obstacle_force.setter
    def obstacle_force(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'obstacle_force' field must be a sub message of type 'Vector3'"
        self._obstacle_force = value

    @builtins.property
    def social_force(self):
        """Message field 'social_force'."""
        return self._social_force

    @social_force.setter
    def social_force(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'social_force' field must be a sub message of type 'Vector3'"
        self._social_force = value

    @builtins.property
    def group_coherence_force(self):
        """Message field 'group_coherence_force'."""
        return self._group_coherence_force

    @group_coherence_force.setter
    def group_coherence_force(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'group_coherence_force' field must be a sub message of type 'Vector3'"
        self._group_coherence_force = value

    @builtins.property
    def group_gaze_force(self):
        """Message field 'group_gaze_force'."""
        return self._group_gaze_force

    @group_gaze_force.setter
    def group_gaze_force(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'group_gaze_force' field must be a sub message of type 'Vector3'"
        self._group_gaze_force = value

    @builtins.property
    def group_repulsion_force(self):
        """Message field 'group_repulsion_force'."""
        return self._group_repulsion_force

    @group_repulsion_force.setter
    def group_repulsion_force(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'group_repulsion_force' field must be a sub message of type 'Vector3'"
        self._group_repulsion_force = value

    @builtins.property
    def random_force(self):
        """Message field 'random_force'."""
        return self._random_force

    @random_force.setter
    def random_force(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'random_force' field must be a sub message of type 'Vector3'"
        self._random_force = value
