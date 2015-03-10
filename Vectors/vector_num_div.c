#include "vector.h"


// Vector Summation With Number
/*
 * V = [1,2,3,4]
 * n = 5
 *
 * n*V = 5*[1,2,3,4] = [1/5,2/5,3/5,4/5]
 *
 */
void vector_num_div (double *vector, double num, double *vector_result, int lenght) {

	int h; // For Loop Variable

	#pragma omp parallel for private(h)
	for (h = 0; h < lenght; h++) {

		vector_result[h] = vector[h] / num;

	}

}
