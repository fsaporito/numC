#include "test.h"

void test_matrix (int length) {

	printf ("\nTesting Square Matrix Of Order %i\n\n", length);

		double matrix_tmp[length*length]; // First Matrix; // First Matrix

		int i = 0; // For Loop Variable

		double k = 1.0;

		for ( i = 0; i < length*length; i++) {

				matrix_tmp[i] = k;

				k = k+1;

		}

		matrix_print(matrix_tmp, length);

		double det = matrix_det (matrix_tmp, length);

		printf ("\nCalculated Determinant = %i\n\n", (int) det);


}
