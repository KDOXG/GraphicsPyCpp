# GraphicsPyCpp

A Python and C++ integrated graphical application. Renderizes an image of Mandelbrot fractal. Binding made with pybind11.

## How the binding works



## Content
* `src` folder containing the C++ module and binding configuration file
* `inc` folder containing C++ header files
* `lib` folder, the output folder for the C++ module build

## Requirements
* Python with pip.

## Libraries used
* matplotlib
* pybind11

## How to run:
> `git clone <this_repo>`
>
> `make`
>
> `make main`

The `make` command runs the dependencies install through `pip install -r requirements` and the C++ module build through the script `setup.py`. The `make main` command runs the main application script from `main.py`.

By default, the script renders a 3000x2000 image. If you want to customize, run `python main.py <width> <height>`.

## Credits
* Dario Marvin for the Mandelbrot fractal implementation