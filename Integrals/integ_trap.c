
#include "integrals.h"

// double* function -----> function address
// double extr_a  ----------> first extreme point
// double extr_b -----------> second extreme point
// long int intervals_num --> number of intervals


inline double integ_trap (double (function) (double x), double extr_a, double extr_b, long int intervals_num) {


//////////////////////////////////////////////////////////////////////////
// Variables Definition And Number Of Intervals Input
//////////////////////////////////////////////////////////////////////////


	double funz_extr_a; // A Imagine
	double funz_extr_b; // B
	double integ; // Result
	int i; // For Loop Variable
	double base; // dx Of Every Interval


// Array Of Points
	double X[intervals_num]; // Array dx [base] Of Every Rectangle
	double Y[intervals_num]; // Array f(x) [height] Of Every Rectangle

	base = (extr_b - extr_a)/intervals_num;

	funz_extr_a = function (extr_a);
	funz_extr_b = function (extr_b);






//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
// Integral Calculation
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

// First Point Definition

	if (extr_b > extr_a) { X[0] = extr_a; }

	if (extr_b < extr_a) { X[0] = extr_b; }

	Y[0] = function (X[0]);

	integ = base*(((funz_extr_b - funz_extr_a)/2) + Y[0]);

// Successive Points
	for (i=1; i<intervals_num; i++) {

		X[i] = X[i-1] + base;
		Y[i] = function (X[i]);

		integ += base * Y[i];

	}


// Return Integral
	return integ;

}
