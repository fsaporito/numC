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
	
	test_number++;
	
	result = test_swap_row (test_number);
		
	if (result == 1) {
		
		printf ("\nERROR TEST MATRIX [%i]\n", test_number);

		return 1;	
			
	}	
	
	test_number++;	
	
	result = test_swap_col (test_number);
		
	if (result == 1) {
		
		printf ("\nERROR TEST MATRIX [%i]\n", test_number);

		return 1;	
			
	}

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


int test_swap_row (int test_number) {
	
	printf ("[Test %i] Swap Row", test_number);
		
	int length = 3;		
	
	int i = 0; // Foor Loop Variable
	
	double matrix_tmp[length*length];
	
	for (i = 0; i < length*length; i++) {
	
		matrix_tmp[i] = i;
		
	}
	
	matrix_print (matrix_tmp, length);
	
	printf ("\n- swap_row 1 and 2:  ");
	
	double matrix_test[length*length];
	
	matrix_test[0] = 0.0;
	
	matrix_test[1] = 1.0;
	
	matrix_test[2] = 2.0;
	
	matrix_test[3] = 6.0;
	
	matrix_test[4] = 7.0;
	
	matrix_test[5] = 8.0;
	
	matrix_test[6] = 3.0;
	
	matrix_test[7] = 4.0;
	
	matrix_test[8] = 5.0;
	
	double m1[length*length];
	
	swap_row (matrix_tmp, m1, length, length, 1, 2);
	
	for (i = 0; i < length*length; i++) {
		
		if (abs(m1[i] - matrix_test[i]) > EPSILON) {
			
			printf ("ERROR!!!\n");
			
			matrix_print (matrix_test, length);
			
			matrix_print (m1, length);
			
			return 1;
			
		}		
		
	}
	
	printf ("OK");
	
	matrix_print (m1, length);
	
	
	
	printf ("\n\n- swap_row 2 and 1:  ");
	
	double m2[length*length];
	
	swap_row (matrix_tmp, m2, length, length, 2, 1);	
	
	for (i = 0; i < length*length; i++) {
		
		if (abs(m2[i] - matrix_test[i]) > EPSILON) {
			
			printf ("ERROR!!!\n");
			
			matrix_print (matrix_test, length);
			
			matrix_print (m2, length);
			
			return 1;
			
		}		
		
	}
	
	printf ("OK");
	
	matrix_print (m1, length);	
	
	printf ("\n");

	return 0;	
	
}


int test_swap_col (int test_number) {
	
	printf ("[Test %i] Swap Coloumn", test_number);
		
	int length = 3;		
	
	int i = 0; // Foor Loop Variable
	
	double matrix_tmp[length*length];
	
	for (i = 0; i < length*length; i++) {
	
		matrix_tmp[i] = i;
		
	}
	
	matrix_print (matrix_tmp, length);
	
	printf ("\n- swap_col 0 and 2:  ");
	
	double matrix_test[length*length];
	
	matrix_test[0] = 2.0;
	
	matrix_test[1] = 1.0;
	
	matrix_test[2] = 0.0;
	
	matrix_test[3] = 5.0;
	
	matrix_test[4] = 4.0;
	
	matrix_test[5] = 3.0;
	
	matrix_test[6] = 8.0;
	
	matrix_test[7] = 7.0;
	
	matrix_test[8] = 6.0;
	
	double m1[length*length];
	
	swap_col (matrix_tmp, m1, length, length, 0, 2);
	
	for (i = 0; i < length*length; i++) {
		
		if (abs(m1[i] - matrix_test[i]) > EPSILON) {
			
			printf ("ERROR!!!\n");
			
			matrix_print (matrix_test, length);
			
			matrix_print (m1, length);
			
			return 1;
			
		}		
		
	}
	
	printf ("OK");
	
	matrix_print (m1, length);
	
	printf ("\n\n- swap_col 2 and 0:  ");
	
	double m2[length*length];
	
	swap_col (matrix_tmp, m2, length, length, 2, 0);	
	
	for (i = 0; i < length*length; i++) {
		
		if (abs(m2[i] - matrix_test[i]) > EPSILON) {
			
			printf ("ERROR!!!\n");
			
			matrix_print (matrix_test, length);
			
			matrix_print (m2, length);
			
			return 1;
			
		}		
		
	}
	
	printf ("OK");
	
	matrix_print (m1, length);	
	
	printf ("\n");

	return 0;	
	
}


