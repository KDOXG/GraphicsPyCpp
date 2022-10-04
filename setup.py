from pathlib import Path
from pybind11.setup_helpers import Pybind11Extension, build_ext
from setuptools import setup

cppmodule = Pybind11Extension(
    'CppModule',
    [str(file) for file in Path('src').glob('*.*') if file.suffix in {".cpp", ".cc"}],
    include_dirs=['inc']
)

setup(
    name='CppModule',
    version=1,
    author='KDOXG',
    author_email='',
    description='C++ module. Contains: fractal',
    ext_modules=[cppmodule],
    cmdclass={"build_ext": build_ext},
    options={
        "build":{
            "build_lib": "lib/"
        }
    }
)