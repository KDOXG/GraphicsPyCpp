# GraphicsPyCpp

A Python and C++ binding graphical application. Renders an image of Mandelbrot fractal. Binding made with **pybind11**.

## How the binding works

The binding works on the Python side through **pybind11**. During the Python library build using `pip install -e . -vvv`, pybind11 builds the C++ module into a binary module. After importing the module as a Python library with the *import* command, all functions defined in the C++ code can be called in the Python code.

The binding made with pybind11 allows using many features from C++ STL. The main function from this C++ application `fractal` returns `vector<vector<int>>`, which translate as a `list` object of `list` objects of `int`.

## Content
* `src` folder containing the C++ module;
* `inc` folder containing C++ header file and pybind configuration file required for module build and binding;
* `lib` folder is the C++ module build output directory.

## Requirements
* Python with pip.

## Libraries used
* matplotlib
* pybind11

## How to run:
`git clone <this_repo>`

`make`

`make main`

The `make` command runs the dependencies install through `pip install -r requirements` and the C++ module build through the script `setup.py`. The `make main` command runs the main application script from `main.py`.

By default, the script renders a 3000x2000 image. If you want to customize, run `python main.py <width> <height>`.

## Credits
* pybind, pybind11. [Source](https://github.com/pybind/pybind11)
* Dario Marvin, the Mandelbrot fractal implementation. [Source](https://github.com/dario-marvin/Mandelbrot)
