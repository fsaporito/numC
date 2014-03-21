#include "matrix.h"


// SubMatrix Without Raw I And Column J
inline void submatrix_c (double **matrix, double **m_tmp, int lenght, int I, int J) {

	int i;
	int j;

	int a = 0;
	int b = 0;

	for ( i = 0; i < lenght; i++) {

		if (i != I) {

			a++;

			for ( j = 0; j < lenght; j++) {

				if (j != J) {

					b++;

					m_tmp[a][b] = matrix[i][j];

				}

			}

		}

	}

}
