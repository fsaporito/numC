#include "vector.h"

// Vector Reversion
/*
 * V = [1,2,3,4] ==> V = [4,3,2,1]
 *
 */

void vector_reverse (double *vector, int lenght) {

	double vector_tmp[lenght];

	int h;

	#pragma omp parallel for private(h)
	for ( h = 0; h < lenght; h++) {

		vector_tmp[h] = vector[h];

	}

	#pragma omp parallel for private(h)
	for ( h = 0; h < lenght; h++) {

		vector[h] = vector_tmp[lenght-1-h];

	}

}
