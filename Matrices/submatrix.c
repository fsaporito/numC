#include "matrix.h"


// SubMatrix Without Raw I And Column J
inline void submatrix (double matrix[], double m_tmp[], int lenght, int I, int J) {

	int i = 0;


	int a = 0;


	int rawNumber = 0;

	for ( i = 0; i < lenght*lenght; i++) {

		if (i == lenght) {

			rawNumber++;
		}

		if (rawNumber != I) {

			if (i != (lenght-1)*I + J) {

				a++;

				m_tmp[a] = matrix[i];

			}

		}

	}

}
