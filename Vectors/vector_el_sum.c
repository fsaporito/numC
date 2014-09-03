#include "vector.h"

// Vector Summation Of All Elements
/*
 * V = [1,2,3,4]
 *
 * Vector_Sum = 1 + 2 + 3 + 4 = 10
 *
 */

double vector_el_sum (double *vector, int lenght) {

	 double sum; // n1 + n2 + n3 .... + nk
	 int h; // For Loop Variable

	 sum = 0;

	 for ( h = 0; h < lenght; h++) {

		 sum += vector[h];

	 }

	 return sum;

}


