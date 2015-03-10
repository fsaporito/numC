#include "vector.h"

// Vector Division Of All Elements
/*
 * V = [1,2,3,4]
 *
 * Vector_Div = ((1 / 2) / 3) / 4 = 1/24
 *
 */

double vector_el_div (double *vector, int lenght) {

	double div; // n1 + n2 + n3 .... + nk
	int h; // For Loop Variable

	div = vector[0];

	#pragma omp parallel for private(h) reduction(*:div)
	for (h = 1; h < lenght; h++) {

		div *= 1/vector[h];

	}

	return div;

}
