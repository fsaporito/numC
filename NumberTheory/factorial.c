
#include "number_theory.h"

// Factorial

/*
 * This Function Calculate The Factorial Of A Given Number
 *
 * factorial(number) = number*factorial(number-1)
 * factorial(zero) = 1
 *
 * -1 => negative input!!!
*/

long long int fact_recursive (int number) {

	if (number < 0) {

		return -1;


	} else {

		long long int factorial; // Factorial Result

		if ( number == 0 ) {

			factorial = 1;

		}

		if ( number != 0 ) {

			factorial = number*fact_recursive(number-1);

		}

		return factorial;

	}

}


inline long long int fact_iterative (int number) {

	if (number < 0) {

		return -1;


	} else {

		long long int factorial; // Factorial Result

		if ( number == 0 ) {

			factorial = 1;

		}

		if ( number != 0 ) {

			int i = 0; // For Loop Variable
			for ( i = 1; i <= number; i++) {

				factorial *= i;

			}

		}

		return factorial;

	}

}


// Vector With The First Nineteen Numbers'Factorial (0 ... 19)
long long int fact_19[20] = { 1,
							  1,
							  2,
							  6,
							  24,
							  120,
							  720,
							  5040,
							  40320,
							  362880,
							  3628800,
							  39916800,
							  479001600,
							  6227020800,
							  87178291200,
							  1307674368000,
							  20922789888000,
							  355687428096000,
							  6402373705728000,
							  121645100408832000};


