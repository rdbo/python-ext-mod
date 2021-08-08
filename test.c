#include <stdio.h>
#include <Python.h>

static PyObject *
test_myprint(PyObject *self, PyObject *args)
{
	const char *str;

	if (!PyArg_ParseTuple(args, "s", &str))
		return NULL;
	
	printf(str);

	return PyLong_FromLong(0);
}

static PyMethodDef test_methods[] = {
	{ "myprint", test_myprint, METH_VARARGS, "Prints the argument" },
	{ NULL, NULL, 0, NULL } /* Sentinel */
};

static PyModuleDef test_module = {
	PyModuleDef_HEAD_INIT,
	"test",
	NULL,
	-1,
	test_methods
};

PyMODINIT_FUNC
PyInit_test(void)
{
	return PyModule_Create(&test_module);
}
