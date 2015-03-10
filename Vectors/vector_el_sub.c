#include "vector.h"

// Vector Subtraction Of All Elements
/*
 * V = [1,2,3,4]
 *
 * Vector_Sum = 1 - 2 - 3 - 4 = -8
 *
 */

double vector_el_sub (double *vector, int lenght) {

	 double sub; // n1 - n2 - n3 .... - nk
	 int h; // For Loop Variable

	 sub = vector[0];

	#pragma omp parallel for private(h) reduction(-:sub)
	 for ( h = 1; h < lenght; h++) {

		 sub -= vector[h];

	 }

	 return sub;

}
