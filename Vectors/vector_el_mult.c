#include "vector.h"

// Vector Multiplication Of All Elements
/*
 * V = [1,2,3,4]
 *
 * Vector_Mult = 1 * 2 * 3 * 4 = 24
 *
 */

double vector_el_mult (double *vector, int lenght) {

	 double mult; // n1 * n2 * n3 .... * nk
	 int h; // For Loop Variable

	 mult = 1;

	 for ( h = 0; h < lenght; h++) {

		 mult *= vector[h];

	 }

	 return mult;

}
