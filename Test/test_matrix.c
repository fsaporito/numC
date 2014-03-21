
#include "../Matrices/matrix.h"
#include "test.h"


void test_matrix (int lenght) {


	printf ("\nTesting Square Matrix Of Order %i\n\n", lenght);

	double **m1; // First Matrix, Order 2

	int i; // For Loop Variable
	int j; // For Loop Variable

	int k = 1;

	m1 =(double **) malloc (sizeof(double *)*2); // Matrix Allocation

	for (i = 0; i < lenght; i++) { // Arrays Allocation

		m1[i] =(double *) malloc (sizeof(int)*lenght);

	}

	for ( i = 0; i < lenght; i++) {

		for ( j = 0; j < lenght; j++) {

			m1[i][j] = k;

			k++;

	 	}

	}


	matrix_print(m1, lenght);

	double det1 = matrix_det (m1, lenght);

	printf ("\n");

	printf ("Calculated Determinant = %lf\n", det1);

}
