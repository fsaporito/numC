#include "matrix.h"

// Matrix Determinant
/*
 * Calculate The Determinant Of A Matrix
 *
 */
inline double matrix_det (double matrix[], int lenght) {

	double det = 0.0;

	if (lenght > 0) {

		if (lenght == 1) {

			det = matrix[0];

		}

		if (lenght == 2) {

			det = matrix[0]*matrix[3] - matrix[1]*matrix[2];

		}

		if (lenght >= 3 && lenght < MAX_DIM) {

			double m_tmp[lenght-1];;

			int z = 0;

			for (z = 0; z < lenght; z++) {

				submatrix (matrix, m_tmp, lenght, 0, z);

				/*
				 * -1 -> i+j odd
				 * +1 -> i+j even
				 * -1^z+2 because i=0+1 & j=z+1 [we start at 0, not 1]
				 */
				det += pow(-1, z+2)*matrix[z]*matrix_det(m_tmp, (lenght - 1));

			}

		}

	}

	return det;

}

