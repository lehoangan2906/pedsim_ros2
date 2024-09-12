// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pedsim_srvs:srv/SetAllAgentsState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "pedsim_srvs/srv/detail/set_all_agents_state__struct.h"
#include "pedsim_srvs/srv/detail/set_all_agents_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool pedsim_msgs__msg__agent_states__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * pedsim_msgs__msg__agent_states__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pedsim_srvs__srv__set_all_agents_state__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pedsim_srvs.srv._set_all_agents_state.SetAllAgentsState_Request", full_classname_dest, 63) == 0);
  }
  pedsim_srvs__srv__SetAllAgentsState_Request * ros_message = _ros_message;
  {  // agent_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "agent_states");
    if (!field) {
      return false;
    }
    if (!pedsim_msgs__msg__agent_states__convert_from_py(field, &ros_message->agent_states)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pedsim_srvs__srv__set_all_agents_state__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetAllAgentsState_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pedsim_srvs.srv._set_all_agents_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetAllAgentsState_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pedsim_srvs__srv__SetAllAgentsState_Request * ros_message = (pedsim_srvs__srv__SetAllAgentsState_Request *)raw_ros_message;
  {  // agent_states
    PyObject * field = NULL;
    field = pedsim_msgs__msg__agent_states__convert_to_py(&ros_message->agent_states);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "agent_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "pedsim_srvs/srv/detail/set_all_agents_state__struct.h"
// already included above
// #include "pedsim_srvs/srv/detail/set_all_agents_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pedsim_srvs__srv__set_all_agents_state__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pedsim_srvs.srv._set_all_agents_state.SetAllAgentsState_Response", full_classname_dest, 64) == 0);
  }
  pedsim_srvs__srv__SetAllAgentsState_Response * ros_message = _ros_message;
  {  // finished
    PyObject * field = PyObject_GetAttrString(_pymsg, "finished");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->finished = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pedsim_srvs__srv__set_all_agents_state__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetAllAgentsState_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pedsim_srvs.srv._set_all_agents_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetAllAgentsState_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pedsim_srvs__srv__SetAllAgentsState_Response * ros_message = (pedsim_srvs__srv__SetAllAgentsState_Response *)raw_ros_message;
  {  // finished
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->finished ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "finished", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
