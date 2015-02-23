#include "test.h"

int test_matrix () {

	int test_number = 0;
	int result = 0;
	int i = 0;

	printf ("\n##############################\n");
	printf ("TEST MATRIX\n\n");

	for (i = 2; i <= 4; i++) {

		test_number++;
		result = test_det (test_number, i);

		if (result == 1) {

			printf ("\nERROR TEST MATRIX [%i]\n", test_number);

			return 1;

		}

	}

	printf ("\n");

	return 0;

}


int test_det (int test_number, int length) {

	printf ("[Test %i] Determinant Of Order %i", test_number, length);

	double matrix_tmp[length*length]; // First Matrix; // First Matrix
	double exp_det = 0.0;

	if (length <= 0) {

		return 1;

	}

	if (length == 1) {

		return 0;

	} else if (length == 2) {

		matrix_tmp[0] = 33;
		matrix_tmp[1] = 20;
		matrix_tmp[2] = -4;
		matrix_tmp[3] = -3;

		exp_det = -19.0;

	} else if (length == 3) {

		matrix_tmp[0] = 2;
		matrix_tmp[1] = 3;
		matrix_tmp[2] = 4;
		matrix_tmp[3] = 1;
		matrix_tmp[4] = 5;
		matrix_tmp[5] = 6;
		matrix_tmp[6] = 1;
		matrix_tmp[7] = 7;
		matrix_tmp[8] = 0;

		exp_det = -58.0;

	} else if (length == 4) {

		matrix_tmp[0] = 11;
		matrix_tmp[1] = -3;
		matrix_tmp[2] = 10;
		matrix_tmp[3] = 10;
		matrix_tmp[4] = 17;
		matrix_tmp[5] = -7;
		matrix_tmp[6] = 19;
		matrix_tmp[7] = 11;
		matrix_tmp[8] = -4;
		matrix_tmp[9] = -2;
		matrix_tmp[10] = 11;
		matrix_tmp[11] = 31;
		matrix_tmp[12] = 20;
		matrix_tmp[13] = 12;
		matrix_tmp[14] = -1;
		matrix_tmp[15] = -9;

		exp_det = -66146.0;

	} else {

		return 0;

	}
	
	matrix_print (matrix_tmp, length);

	double det = matrix_det (matrix_tmp, length);
	
	printf ("\nDeterminant = %i", (int) det);

	if (abs(det -  exp_det) > EPSILON) {

		printf ("  ERROR!!! Expected Determinant = %i\n\n", (int) exp_det);

		return 1;

	} else {

		printf ("  OK\n\n");

		return 0;

	}

}
