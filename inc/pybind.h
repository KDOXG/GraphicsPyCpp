#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

// pip install -e . -vvv

namespace py = pybind11;

PYBIND11_MODULE(CppModule, m) {
    m.doc() = "Mandelbrot Fractal.";

    m.def("fractal", &fractal, "Mandelbrot Fractal.");
}
