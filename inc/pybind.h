#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(CppModule, mod) {
    mod.def("fractal", &fractal, "Mandelbrot Fractal.");
}