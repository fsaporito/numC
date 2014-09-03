#include "vector.h"

// Vector Square Power
/*
 * V = [1,2,3,4]
 *
 * V_Square_Power = [1^2,2^2,3^2,4^2] = [1,4,9,16]
 *
 */
void vector_square_pover (double *vector, double *vector_result, int lenght) {

	vector_vector_mult (vector, vector, vector_result, lenght);

}
