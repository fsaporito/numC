
#include "integrals.h"

/**
 * double* function -----> function address
 * double extr_a  ----------> first extreme point
 * double extr_b -----------> second extreme point
 * long int intervals_num --> number of intervals
 * double* integ_first -----> address where to save the first integral
 * double* integ_second ----> address where to save the second integral
 */



inline void integ_rect (double (function) (double x), double extr_a, double extr_b, long int intervals_num, double *integ_first, double *integ_second) {



//////////////////////////////////////////////////////////////////////////
// Variables Definition
//////////////////////////////////////////////////////////////////////////


	int i; // For Loop Variable
	double base; // dx Of Every Interval


	// Array Of Points
	double X[intervals_num]; // Array dx [base] Of Every Rectangle
	double Y[intervals_num]; // Array f(x) [height] Of Every Rectangle

	base = (extr_b - extr_a)/intervals_num;






//////////////////////////////////////////////////////////////////////////
// Integral Calculation
//////////////////////////////////////////////////////////////////////////


	// First Point Definition

	if (extr_b > extr_a) {

		X[0] = extr_a;

	}

	if (extr_b < extr_a) {

		X[0] = extr_b;

	}

	Y[0] = function (X[0]);

	*integ_first = base*(Y[0]);
	*integ_second = 0;

// I
	for (i=1; i<=intervals_num; i++) {

		X[i] = X[i-1] + base;
		Y[i] = function (X[i]);

		if ( i != intervals_num) {

			*integ_first += base*Y[i];

		}

		*integ_second += base*Y[i];



	}

}
