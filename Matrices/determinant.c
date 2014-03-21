
#include "matrix.h"

// Matrix Determinant
/*
 * Calculate The Determinant Of A Matrix
 *
 */
inline double matrix_det (double **matrix, int lenght) {

	double det = 0.0;

	if (lenght > 0) {

		if (lenght == 1) {

			det = matrix[0][0];

		}

		if (lenght == 2) {

			det = matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];

		}

		if (lenght > 3 && lenght < MAX_DIM) {

			double **m_tmp;

			int i;

			m_tmp =(double **) malloc (sizeof(double *)*(lenght-1));

			for (i = 0; i < 2; i++) {

				m_tmp[i] =(double *) malloc (sizeof(int)*(lenght-1));

			}

			int z;

			for (z = 0; z < lenght; z++) {

				submatrix (matrix, m_tmp, lenght, 0, z);

				det += matrix[z][0]*matrix_det(m_tmp, (lenght - 1));

			}

		}

	}

	return det;

}

