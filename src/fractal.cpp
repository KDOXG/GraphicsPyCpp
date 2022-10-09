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
	
	// int width = 30; //number of characters fitting horizontally on my screen 
	// int heigth = 10; //number of characters fitting vertically on my screen
	
	double x_start = -2.0;
	double x_fin = 1.0;
	double y_start = -1.0;
	double y_fin = 1.0;

    vector<vector<int>> matrix;
	
	//~ double x_start = -0.25;
	//~ double x_fin = 0.05;
	//~ double y_start = -0.95;
	//~ double y_fin = -0.75;
	
	//~ double x_start = -0.13;
	//~ double x_fin = -0.085;
	//~ double y_start = -0.91;
	//~ double y_fin = -0.88;
	
	double dx = (x_fin - x_start)/(width - 1);
	double dy = (y_fin - y_start)/(heigth - 1);

    int val = 0;

	for (int i = 0; i < heigth; i++) {
        matrix.emplace_back();
		for (int j = 0; j < width; j++) {
            double x = x_start + j*dx; // current real value
            double y = y_fin - i*dy; // current imaginary value
    
            int value = mandelbrot(x,y);
            
            if (value == 100) val = BLANK; // {cout << " ";}
            else if (value > 90) val = red; // {cout << red << char_;}
            else if (value > 70) val = l_red; // {cout << l_red << char_;}
            else if (value > 50) val = orange; // {cout << orange << char_;}
            else if (value > 30) val = yellow; // {cout << yellow << char_;}
            else if (value > 20) val = l_green; // {cout << l_green << char_;}
            else if (value > 10) val = green; // {cout << green << char_;}
            else if (value > 5) val = cyan; // {cout << cyan << char_;}
            else if (value > 3) val = l_blue; // {cout << l_blue << char_;}
            else if (value > 2) val = blue; // {cout << blue << char_;}
            else if (value > 1) val = magenta; // {cout << magenta << char_;}
            else val = l_magenta; // {cout << l_magenta << char_;}
                    
            matrix[i].push_back(val);
        }
    }
	return matrix;
}