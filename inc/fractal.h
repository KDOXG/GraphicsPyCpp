#include <vector>
using namespace std;

int mandelbrot(double real, double imag);
vector<vector<int>> fractal(int width, int heigth);

enum FractalColors {
    BLANK = 0,
    // char_,
    black,
    red,
    l_red,
    green,
    l_green,
    orange,
    yellow,
    blue,
    l_blue,
    magenta,
    l_magenta,
    cyan,
    l_cyan,
    gray,
    white
};
