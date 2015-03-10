#include "matrix.h"

// Matrix Determinant
/*
 * Calculate The Determinant Of A Matrix
 *
 */

inline double matrix_det (double matrix[], int lenght) {

	double det = 0.0;

	if (lenght > 0) {

		// Length == 1, Return The Only Number
		if (lenght == 1) {

			det = matrix[0];

		}

		// Length == 2, Apply Definition
		if (lenght == 2) {

			det = matrix[0]*matrix[3] - matrix[1]*matrix[2];

		}

		// Length > 2, Laplace Rule
		if (lenght > 2) {
			
			// TMP Matrix To Hold The Current Submatrix
			double m_tmp[(lenght-1)*(lenght-1)];

			// Foor Loop Variable
			int z = 0;
			
			// TMP Matrix Value
			double m_value = 0.0;
			
			// Sign Variable
			int sign = 0;

			#pragma omp parallel for private(z,m_value,sign) reduction(+:det)
			for (z = 0; z < lenght; z++) {

				// Submatrix Calculation
				submatrix (matrix, m_tmp, lenght, 0, z);
				
				// Matrix Value Assignment
				m_value = matrix[z];
				
				
				// pow (-1, z)
				if ( z%2 == 0 ) {
					
					sign = 1;
					
				} else {
					
					sign = -1;
					
				}
				 
				// Determinant Calculation
				det += sign*m_value*matrix_det(m_tmp, (lenght - 1));
				 
			}

		}

	}

	return det;

}

