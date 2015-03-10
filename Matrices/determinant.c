#include "matrix.h"

// Matrix Determinant
/*
 * Calculate The Determinant Of A Matrix
 *
 */

inline double matrix_det (double matrix[], int length) {

	double det = 0.0;

	if (length > 0) {

		// Length == 1, Return The Only Number
		if (length == 1) {

			det = matrix[0];

		}

		// Length == 2, Apply Definition
		if (length == 2) {

			det = matrix[0]*matrix[3] - matrix[1]*matrix[2];

		}

		// Length > 2, Laplace Rule
		if (length > 2) {
			
			// TMP Matrix To Hold The Current Submatrix
			double m_tmp[(length-1)*(length-1)];

			// Foor Loop Variable
			int z = 0;
			
			// TMP Matrix Value
			double m_value = 0.0;
			
			// Single Minor Computation
			double res = 0.0;

			#pragma omp parallel for private(z,m_value,res) reduction(+:det)
			for (z = 0; z < length; z++) {

				// Submatrix Calculation
				submatrix (matrix, m_tmp, length, 0, z);				
				
				// m_value = pow (-1, z)*matrix[z]
				if ( z%2 == 0 ) {
					
					m_value = matrix[z];
					
				} else {
					
					m_value = -matrix[z];
					
				}
				
				// Determinant Calculation
				// Separated From det To Minimize Time In Critical Section
				res = m_value*matrix_det(m_tmp, (length - 1));
				 
				// Adding Partial Result To Total Determinant
				det += res;
				 
			}

		}

	}

	return det;

}
