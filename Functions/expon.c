
#include "functions.h"

// Expon

/*
 * a^b = a*a*a*a ....    k times
 *
 * es: 3^4 = 3*3*3*3 = 81
 *
 */

inline double expon (double a, int b) {

	double result; // Result To Return
	int j; // For Loop Variable

	result = 1.0;

	if (a == 0) { // 0^b = 0

		return 0;

	}

	if ( b == 0 ) { // a^0 = 1, a != 0

		return 1;

	}


	if ( b > 0 ) { // b is positive

		for (j = 0; j < b; j++) {

			result *= a;

		}

	}

	if ( b < 0  ) {  // b is negative: a^(-b) = (1/a)^b

		for (j = 0; j < b; j++) {

			result /= a;
		}

	}

	return result;

}

