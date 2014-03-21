
#include "functions.h"

#define MAX_INTER_SQRT 100000


// Sqrt = n^(1/m)

/*
 * n^(1/m) => X^m - n = 0  (Newton's Method)
 *
 */

double sqroot (double n, int m) { // Require Expon

	double precision = 0.00001;

	double extr_a = precision;
	double extr_b = n;


	double zero; // Zero
	double funz_a; // function(extr_a)
	double X[MAX_INTER_SQRT]; // X vector
	double funz[MAX_INTER_SQRT]; // Y vector
	double der[MAX_INTER_SQRT]; // Deriv1 vector
	int inter = 0; // Interaction

	funz_a = expon(extr_a,m) - n; // function(extr_a)

	if ( funz_a*m*(m-1)*expon(extr_a,(m-2)) < 0 ) {  // f(a)*DDf(x) < 0  seed = b

		X[0] = extr_b;

	}

	if ( funz_a*m*(m-1)*expon(extr_b,(m-2)) > 0 ) { // f(a)*DDf(x) > 0  seed = a

		X[0] = extr_a;

	}

	funz[0] = expon(X[0],m) - n; // f(seed)

	der[0] = m*expon(X[0],(m-1)); // deriv1(seed)

	do {

		inter ++; // Increase Interaction

		X[inter] = X[inter-1] - (funz[inter-1] / der[inter-1] );  // New Point

		funz[inter] = expon(X[inter],m) - n; // function[X[i]

		der[inter] = m*expon(X[inter],(m-1));  // deriv1(X[i]

	} while (absolute(X[inter - 1] - X[inter]) > precision );

	zero = X[inter];

	return zero;

}
