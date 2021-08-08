from distutils.core import setup, Extension

test = Extension("test",
		 include_dirs=[ "/usr/include/python3.9" ],
                 sources=[ "test.c" ])

setup (name="test",
       version="1.0",
       description="Test module",
       author="rdbo",
       ext_modules=[test])
