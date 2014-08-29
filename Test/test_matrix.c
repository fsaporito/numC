

#include "test.h"

int testMatrix (int length) {

	rintf ("\nTesting Square Matrix Of Order %i\n\n", length);

		double matrix_tmp[length*length]; // First Matrix; // First Matrix

		int i = 0; // For Loop Variable

		double k = 1.0;

		matrix_print(matrix_tmp, length);


		printf ("\n[*] Adding Numbers:\n");

		for ( i = 0; i < length*length; i++) {

				printf ("[k=%lf] Number[%i] = ", k, i);

				matrix_tmp[i] = k;

				printf (" %lf  (expected: [%lf])", matrix_tmp[i], k);

				k = k+1;

				printf ("	OK\n");
				printf (" K+1=%lf\n\n\n", k);

		}

		for ( i = 0; i < length; i++) {

			printf ("\nNumber[%i] = %lf", i, matrix_tmp[i]);

		}

		printf ("\n[*] Matrix Print:\n\n");


		matrix_print(matrix_tmp, length);

		printf ("\n[*]Determinant Calculation:");

		double det1 = matrix_det (matrix_tmp, length);

		printf ("	OK \n");

		printf ("Calculated Determinant = %lf\n", det1);
	
	
	
    return 0;

}
