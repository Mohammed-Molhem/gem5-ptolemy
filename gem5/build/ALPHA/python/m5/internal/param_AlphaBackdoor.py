# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_AlphaBackdoor', [dirname(__file__)])
        except ImportError:
            import _param_AlphaBackdoor
            return _param_AlphaBackdoor
        if fp is not None:
            try:
                _mod = imp.load_module('_param_AlphaBackdoor', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_AlphaBackdoor = swig_import_helper()
    del swig_import_helper
else:
    import _param_AlphaBackdoor
del version_info
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError(name)

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0


def _swig_setattr_nondynamic_method(set):
    def set_attr(self,name,value):
        if (name == "thisown"): return self.this.own(value)
        if hasattr(self,name) or (name == "this"):
            set(self,name,value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


import m5.internal.param_Terminal
import m5.internal.param_IntrControl
import m5.internal.param_System
import m5.internal.enum_MemoryMode
import m5.internal.AbstractMemory_vector
import m5.internal.param_AbstractMemory
import m5.internal.param_MemObject
import m5.internal.param_ClockedObject
import m5.internal.param_ClockDomain
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
import m5.internal.AddrRange_vector
import m5.internal.param_Platform
import m5.internal.param_SimpleDisk
import m5.internal.param_DiskImage
import m5.internal.param_AlphaSystem
import m5.internal.param_BaseCPU
import m5.internal.param_AlphaTLB
import m5.internal.param_BaseTLB
import m5.internal.param_AlphaInterrupts
import m5.internal.Process_vector
import m5.internal.param_Process
import m5.internal.Counter_vector
import m5.internal.AlphaISA_vector
import m5.internal.param_AlphaISA
import m5.internal.param_InstTracer
import m5.internal.param_BasicPioDevice
import m5.internal.param_PioDevice
class AlphaBackdoor(m5.internal.param_BasicPioDevice.BasicPioDevice):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
AlphaBackdoor_swigregister = _param_AlphaBackdoor.AlphaBackdoor_swigregister
AlphaBackdoor_swigregister(AlphaBackdoor)

class AlphaBackdoorParams(m5.internal.param_BasicPioDevice.BasicPioDeviceParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_AlphaBackdoor.AlphaBackdoorParams_create(self)
    terminal = _swig_property(_param_AlphaBackdoor.AlphaBackdoorParams_terminal_get, _param_AlphaBackdoor.AlphaBackdoorParams_terminal_set)
    platform = _swig_property(_param_AlphaBackdoor.AlphaBackdoorParams_platform_get, _param_AlphaBackdoor.AlphaBackdoorParams_platform_set)
    disk = _swig_property(_param_AlphaBackdoor.AlphaBackdoorParams_disk_get, _param_AlphaBackdoor.AlphaBackdoorParams_disk_set)
    system = _swig_property(_param_AlphaBackdoor.AlphaBackdoorParams_system_get, _param_AlphaBackdoor.AlphaBackdoorParams_system_set)
    cpu = _swig_property(_param_AlphaBackdoor.AlphaBackdoorParams_cpu_get, _param_AlphaBackdoor.AlphaBackdoorParams_cpu_set)
    def __init__(self): 
        this = _param_AlphaBackdoor.new_AlphaBackdoorParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_AlphaBackdoor.delete_AlphaBackdoorParams
    __del__ = lambda self : None;
AlphaBackdoorParams_swigregister = _param_AlphaBackdoor.AlphaBackdoorParams_swigregister
AlphaBackdoorParams_swigregister(AlphaBackdoorParams)



