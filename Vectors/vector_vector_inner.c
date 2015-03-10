#include "vector.h"

// Vector Vector Inner Product
/*
 * V = [1,2,3,4]
 * W = [5,6,7,8]
 *
 * Vector_Vector_Inner = [1*5 + 2*6 + 3*7 + 4*8] = [5+12+21+32] = 70
 *
 */
void vector_vector_inner (double *vector1, double *vector2, double result, int lenght) {

	double vector_tmp[lenght];

	int i; // For Loop Variable

	#pragma omp parallel for private(i)
	for (i = 0; i < lenght; i++) {

		vector_tmp[i] = 0;

	}

	vector_vector_mult (vector1, vector2, vector_tmp, lenght);

	result = vector_el_sum (vector_tmp, lenght);

}


