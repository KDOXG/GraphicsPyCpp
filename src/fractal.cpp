// Source: https://github.com/dario-marvin/Mandelbrot

#include "../inc/fractal.h"

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

int fractal(int width = 30, int heigth = 10, int xi = 15, int yi = 5) {
	
	// int width = 30; //number of characters fitting horizontally on my screen 
	// int heigth = 10; //number of characters fitting vertically on my screen
	
	double x_start = -2.0;
	double x_fin = 1.0;
	double y_start = -1.0;
	double y_fin = 1.0;
	
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

    int valReturn = 0;

	// for (int i = 0; i < heigth; i++) {
	// 	for (int j = 0; j < width; j++) {
			
    double x = x_start + xi*dx; // current real value
    double y = y_fin - yi*dy; // current imaginary value
    
    int value = mandelbrot(x,y);
    
    if (value == 100) valReturn = BLANK; // {cout << " ";}
    else if (value > 90) valReturn = red; // {cout << red << char_;}
    else if (value > 70) valReturn = l_red; // {cout << l_red << char_;}
    else if (value > 50) valReturn = orange; // {cout << orange << char_;}
    else if (value > 30) valReturn = yellow; // {cout << yellow << char_;}
    else if (value > 20) valReturn = l_green; // {cout << l_green << char_;}
    else if (value > 10) valReturn = green; // {cout << green << char_;}
    else if (value > 5) valReturn = cyan; // {cout << cyan << char_;}
    else if (value > 3) valReturn = l_blue; // {cout << l_blue << char_;}
    else if (value > 2) valReturn = blue; // {cout << blue << char_;}
    else if (value > 1) valReturn = magenta; // {cout << magenta << char_;}
    else valReturn = l_magenta; // {cout << l_magenta << char_;}
            
	return valReturn;
}