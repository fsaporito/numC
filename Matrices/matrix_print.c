
#include "matrix.h"
#include "stdio.h"

// Matrix Print
/*
 * Print A Given Matrix
 *
 */
inline void matrix_print (double **matrix, int lenght) {

	int i;
	int j;

	for ( i = 0; i < lenght; i++) {

		printf ("|");

		for (j=0; j<lenght; j++) {

 			printf ("  %lf  ",matrix[i][j]);

		}

		printf ("| \n");

	}

}

