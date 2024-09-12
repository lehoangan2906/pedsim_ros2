# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pedsim_srvs:srv/GetAllAgentsState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'agent_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetAllAgentsState_Request(type):
    """Metaclass of message 'GetAllAgentsState_Request'."""

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
            module = import_type_support('pedsim_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pedsim_srvs.srv.GetAllAgentsState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_all_agents_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_all_agents_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_all_agents_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_all_agents_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_all_agents_state__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAllAgentsState_Request(metaclass=Metaclass_GetAllAgentsState_Request):
    """Message class 'GetAllAgentsState_Request'."""

    __slots__ = [
        '_agent_ids',
    ]

    _fields_and_field_types = {
        'agent_ids': 'sequence<int16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.agent_ids = array.array('h', kwargs.get('agent_ids', []))

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
        if self.agent_ids != other.agent_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def agent_ids(self):
        """Message field 'agent_ids'."""
        return self._agent_ids

    @agent_ids.setter
    def agent_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'agent_ids' array.array() must have the type code of 'h'"
            self._agent_ids = value
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
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'agent_ids' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._agent_ids = array.array('h', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetAllAgentsState_Response(type):
    """Metaclass of message 'GetAllAgentsState_Response'."""

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
            module = import_type_support('pedsim_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pedsim_srvs.srv.GetAllAgentsState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_all_agents_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_all_agents_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_all_agents_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_all_agents_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_all_agents_state__response

            from pedsim_msgs.msg import AgentStates
            if AgentStates.__class__._TYPE_SUPPORT is None:
                AgentStates.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAllAgentsState_Response(metaclass=Metaclass_GetAllAgentsState_Response):
    """Message class 'GetAllAgentsState_Response'."""

    __slots__ = [
        '_agent_states',
    ]

    _fields_and_field_types = {
        'agent_states': 'pedsim_msgs/AgentStates',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['pedsim_msgs', 'msg'], 'AgentStates'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from pedsim_msgs.msg import AgentStates
        self.agent_states = kwargs.get('agent_states', AgentStates())

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
        if self.agent_states != other.agent_states:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def agent_states(self):
        """Message field 'agent_states'."""
        return self._agent_states

    @agent_states.setter
    def agent_states(self, value):
        if __debug__:
            from pedsim_msgs.msg import AgentStates
            assert \
                isinstance(value, AgentStates), \
                "The 'agent_states' field must be a sub message of type 'AgentStates'"
        self._agent_states = value


class Metaclass_GetAllAgentsState(type):
    """Metaclass of service 'GetAllAgentsState'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pedsim_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pedsim_srvs.srv.GetAllAgentsState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_all_agents_state

            from pedsim_srvs.srv import _get_all_agents_state
            if _get_all_agents_state.Metaclass_GetAllAgentsState_Request._TYPE_SUPPORT is None:
                _get_all_agents_state.Metaclass_GetAllAgentsState_Request.__import_type_support__()
            if _get_all_agents_state.Metaclass_GetAllAgentsState_Response._TYPE_SUPPORT is None:
                _get_all_agents_state.Metaclass_GetAllAgentsState_Response.__import_type_support__()


class GetAllAgentsState(metaclass=Metaclass_GetAllAgentsState):
    from pedsim_srvs.srv._get_all_agents_state import GetAllAgentsState_Request as Request
    from pedsim_srvs.srv._get_all_agents_state import GetAllAgentsState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
