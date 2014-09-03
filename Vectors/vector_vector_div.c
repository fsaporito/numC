#include "vector.h"

// Vector Vector Division ElementWise
/*
 * V = [1,2,3,4]
 * W = [5,6,7,8]
 *
 * Vector_Vector_Div = [1/5,2/6,3/7,4/8] = [1/5,1/3,3/7,1/2]
 *
 */

void vector_vector_div (double *vector1, double *vector2, double *vector_result, int lenght) {

	int h; // For Loop Variable

	for (h = 0; h < lenght; h++) {

		vector_result[h] = vector1[h] / vector2[h];

	}

}
