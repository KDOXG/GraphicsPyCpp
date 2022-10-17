// Source: https://github.com/dario-marvin/Mandelbrot

#include "../inc/fractal.h"
using namespace std;

int mandelbrot(double real, double imag) {
	int limit = 100;
	double zReal = real;
	double zImag = imag;

	for (int i = 0; i < limit; ++i) {
		double r2 = zReal * zReal;
		double i2 = zImag * zImag;
		
		if (r2 + i2 > 4.0) return i;

		zImag = 2.0 * zReal * zImag + imag;
		zReal = r2 - i2 + real;
	}
	return limit;
}

vector<vector<int>> fractal(int width = 30, int heigth = 10) {
	
	double x_start = -2.0;
	double x_fin = 1.0;
	double y_start = -1.0;
	double y_fin = 1.0;

    vector<vector<int>> matrix(heigth, vector<int>(width));
	
	double dx = (x_fin - x_start)/(width - 1);
	double dy = (y_fin - y_start)/(heigth - 1);

    int val = 0;

	for (int i = 0; i < heigth; i++) {
		for (int j = 0; j < width; j++) {
            double x = x_start + j*dx;
            double y = y_fin - i*dy;
    
            int value = mandelbrot(x,y);
            
            if (value == 100) val = BLANK;
            else if (value > 90) val = red;
            else if (value > 70) val = l_red;
            else if (value > 50) val = orange;
            else if (value > 30) val = yellow;
            else if (value > 20) val = l_green;
            else if (value > 10) val = green;
            else if (value > 5) val = cyan;
            else if (value > 3) val = l_blue;
            else if (value > 2) val = blue;
            else if (value > 1) val = magenta;
            else val = l_magenta;
                    
            matrix[i][j] = val;
        }
    }
	return matrix;
}