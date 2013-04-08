// This file declares the IContext Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration
#include "PythonCOM.h"
class PyIContext : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR(PyIContext);
	static IContext *GetI(PyObject *self);
	static PyComEnumProviderTypeObject type;

	// The Python methods
	static PyObject *SetProperty(PyObject *self, PyObject *args);
	static PyObject *RemoveProperty(PyObject *self, PyObject *args);
	static PyObject *GetProperty(PyObject *self, PyObject *args);
	static PyObject *EnumContextProps(PyObject *self, PyObject *args);

protected:
	PyIContext(IUnknown *pdisp);
	~PyIContext();
};