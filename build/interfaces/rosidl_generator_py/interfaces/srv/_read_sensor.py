# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv\ReadSensor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReadSensor_Request(type):
    """Metaclass of message 'ReadSensor_Request'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.ReadSensor_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__read_sensor__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__read_sensor__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__read_sensor__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__read_sensor__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__read_sensor__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReadSensor_Request(metaclass=Metaclass_ReadSensor_Request):
    """Message class 'ReadSensor_Request'."""

    __slots__ = [
        '_numsamples',
    ]

    _fields_and_field_types = {
        'numsamples': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.numsamples = kwargs.get('numsamples', int())

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
        if self.numsamples != other.numsamples:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def numsamples(self):
        """Message field 'numsamples'."""
        return self._numsamples

    @numsamples.setter
    def numsamples(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'numsamples' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'numsamples' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._numsamples = value


# Import statements for member types

# Member 'response'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ReadSensor_Response(type):
    """Metaclass of message 'ReadSensor_Response'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.ReadSensor_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__read_sensor__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__read_sensor__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__read_sensor__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__read_sensor__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__read_sensor__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReadSensor_Response(metaclass=Metaclass_ReadSensor_Response):
    """Message class 'ReadSensor_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response = array.array('f', kwargs.get('response', []))

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
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'response' array.array() must have the type code of 'f'"
            self._response = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence and each value of type 'float'"
        self._response = array.array('f', value)


class Metaclass_ReadSensor(type):
    """Metaclass of service 'ReadSensor'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.ReadSensor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__read_sensor

            from interfaces.srv import _read_sensor
            if _read_sensor.Metaclass_ReadSensor_Request._TYPE_SUPPORT is None:
                _read_sensor.Metaclass_ReadSensor_Request.__import_type_support__()
            if _read_sensor.Metaclass_ReadSensor_Response._TYPE_SUPPORT is None:
                _read_sensor.Metaclass_ReadSensor_Response.__import_type_support__()


class ReadSensor(metaclass=Metaclass_ReadSensor):
    from interfaces.srv._read_sensor import ReadSensor_Request as Request
    from interfaces.srv._read_sensor import ReadSensor_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
