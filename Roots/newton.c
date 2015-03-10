// Newton


#include "roots.h"

inline double newton (double extr_a, double extr_b, double (*function) (double x), double (*deriv1) (double x), double (*deriv2) (double x), double precision) { // Require absolute

	double zero; // Zero
	double funz_a; // function(extr_a)
	double X[MAX_INTER]; // X vector
	double funz[MAX_INTER]; // Y vector
	double der[MAX_INTER]; // Deriv1 vector
	int inter = 0; // Iteration Number

	funz_a = function (extr_a); // function(extr_a)

	if ( funz_a*deriv2(extr_a) < 0 ) { // f(a)*DDf(x) < 0  seed = b

		X[0] = extr_b;

	}

	if ( funz_a*deriv2(extr_b) > 0 ) { // f(a)*DDf(x) > 0  seed = a

		X[0] = extr_a;

	}

	funz[0] = function (X[0]); // f(seed)

	der[0] = deriv1 (X[0]); // deriv1(seed)


	// Main Calculation Loop
	do {

		inter ++; // Increase Interaction

		X[inter] = X[inter-1] - (funz[inter-1] / der[inter-1] );  // New Point

		// Function And Derivative In X[Inter] Calculation
		#pragma omp parallel sections 
		{
			
			// Function In X[Inter]
			#pragma omp section 
			{
				
				funz[inter] = function (X[inter]); // function[X[i]
					
			}
			
			// Derivative In X[Inter]
			#pragma omp section 
			{
				
				der[inter] = deriv1 (X[inter]);  // deriv1(X[i]
					
			}
			
		}

	} while (abs(X[inter - 1] - X[inter]) > precision || inter < MAX_INTER);

	zero = X[inter];

	return zero;

}
