#include "test.h"

int test_matrix () {

	int test_number = 0;
	int result = 0;
	int i = 0;

	printf ("\n######################\n");
	printf ("TEST MATRIX\n\n");

	for (i = 2; i <= 4; i++) {

		test_number++;
		result = test_det (test_number, i);

		if (result == 1) {

			printf ("\nERROR TEST MATRIX [%i]", test_number);

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

		matrix_tmp[0] = 3;
		matrix_tmp[1] = 2;
		matrix_tmp[2] = -4;
		matrix_tmp[3] = -3;

		exp_det = -1.0;

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

		matrix_tmp[0] = 14;
		matrix_tmp[1] = 30;
		matrix_tmp[2] = 10;
		matrix_tmp[3] = -10;
		matrix_tmp[4] = 77;
		matrix_tmp[5] = 0;
		matrix_tmp[6] = 19;
		matrix_tmp[7] = 1;
		matrix_tmp[8] = 4;
		matrix_tmp[9] = -2;
		matrix_tmp[10] = 4;
		matrix_tmp[11] = 0;
		matrix_tmp[12] = 2;
		matrix_tmp[13] = 0;
		matrix_tmp[14] = 1;
		matrix_tmp[15] = 9;

		exp_det = -1944;

	} else {

		return 0;

	}

	double det = matrix_det (matrix_tmp, length);

	if (det !=  exp_det) {

		printf ("  ERROR!!!");

		matrix_print(matrix_tmp, length);

		printf ("\nCalculated Determinant = %i\n\n", (int) det);
		printf ("\nExpected Determinant = %i\n\n", (int) exp_det);

		return 1;

	} else {

		printf ("  OK\n");

		return 0;

	}

}
