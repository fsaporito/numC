
#include "integrals.h"

// double* function -----> function address
// double extr_a  ----------> first extreme point
// double extr_b -----------> second extreme point
// long int intervals_num --> number of intervals


inline double integ_cav_simpson (double (function) (double x), double extr_a, double extr_b, long int intervals_num) {

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
// Variables Definition
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

	double integ; // Result
	int i; // For Loop Variable
	double base; // dx Of Every Interval
	double odd_sum; // Summation Of Values With Odd Index
	double even_sum; // Summation Of Values With Even Index



// Array Of Points
	double X[2*intervals_num]; // Array dx [base] Of Every Rectangle
	double Y[2*intervals_num]; // Array f(x) [height] Of Every Rectangle

	base = abs((extr_b - extr_a))/(2*intervals_num);





//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
// Integral Calculation
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

// First Point Definition

	if (extr_b > extr_a) {

		X[0] = extr_a;

	}

	if (extr_b < extr_a) {

		X[0] = extr_b;

	}

	Y[0] = function (X[0]);

// Points And Images Calculation
	for (i = 1; i <= (2*intervals_num); i++) {

		X[i] = X[i-1] + base; Y[i] = X[i]*X[i]*X[i];

	}

// Points'Images Calculation
	#pragma omp parallel sections 
	{
		
		// Odd Sum Calculation
		#pragma omp section 
		{	
			
			odd_sum = 0;

			for (i = 1; i <= (2*intervals_num-1); i += 2) { 
		
			odd_sum += Y[i]; 
		
			}
			
		}	

		// Even Sum Calculation
		#pragma omp section 
		{	
			
			even_sum = 0;
	
			for (i = 2; i <= (2*intervals_num-2); i += 2 ) { 
		
				even_sum += Y[i]; 
		
			}
			
		}
		
	}


	integ = (2*base/6)*(Y[0] + Y[2*intervals_num] + 2*odd_sum + 4*even_sum);


// Return Integ
	return integ;

}
