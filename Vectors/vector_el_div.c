#include "vector.h"

// Vector Division Of All Elements
/*
 * V = [1,2,3,4]
 *
 * Vector_Div = ((1 / 2) / 3) / 4 = 1/24
 *
 */

inline double vector_el_div (double *vector, int lenght) {

	double div; // n1 + n2 + n3 .... + nk
	int h; // For Loop Variable

	div = 1;

	for (h = 0; h < lenght; h++) {

		div /= vector[h];

	}

	return div;

}
