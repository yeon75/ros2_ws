// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interface_example:msg/ArithmeticArgument.idl
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
#include "interface_example/msg/detail/arithmetic_argument__struct.h"
#include "interface_example/msg/detail/arithmetic_argument__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interface_example__msg__arithmetic_argument__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("interface_example.msg._arithmetic_argument.ArithmeticArgument", full_classname_dest, 61) == 0);
  }
  interface_example__msg__ArithmeticArgument * ros_message = _ros_message;
  {  // argument_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "argument_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->argument_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // argument_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "argument_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->argument_b = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface_example__msg__arithmetic_argument__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArithmeticArgument */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface_example.msg._arithmetic_argument");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArithmeticArgument");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface_example__msg__ArithmeticArgument * ros_message = (interface_example__msg__ArithmeticArgument *)raw_ros_message;
  {  // argument_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->argument_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "argument_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // argument_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->argument_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "argument_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
