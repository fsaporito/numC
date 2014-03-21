#include "vector.h"


// Vector Subtraction With Number
/*
 * V = [1,2,3,4]
 * n = 5
 *
 * n*V = [1-5,2-5,3-5,4-5] = [-4,-3,-2,-1]
 *
 */
inline void vector_num_sub (double *vector, double num, double *vector_result, int lenght) {

	int h; // For Loop Variable

	for (h = 0; h < lenght; h++) {

		vector_result[h] = vector[h] - num;

	}

}
