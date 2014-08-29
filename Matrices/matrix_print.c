
#include "matrix.h"


// Matrix Print
/*
 * Print A Given Matrix
 *
 */
inline void matrix_print (double matrix[], int lenght) {

	int i = 0;
	int rowNumber = 0;

	printf ("\n\n");

	for ( i = 0; i < lenght*lenght; i++) {

		if (i == rowNumber*lenght) {

			printf ("|");

		}

		printf ("  %lf  ", matrix[i]);

		if (i == lenght - 1 ) {



		}

		if (i == (rowNumber+1)*lenght -1 ) {

			rowNumber++;

			printf ("| \n");

		}

	}

}

