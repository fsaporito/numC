#include "matrix.h"


// SubMatrix Without Row I And Column J
inline void submatrix (double matrix[], double m_tmp[], int lenght, int I, int J) {

	// Virtual Row Index
	int i = 0;
	
	// Virtual Column Index
	int j = 0;

	// TMP Matrix Current Position
	int a = 0;
	
	// Matrix Current Position
	int b = 0;
	
		
	for (i = 0; i < lenght; i++) {
		
		if (i != I) {
			
			for (j = 0; j < lenght; j++) {
				
				if (j != J) {
					
					m_tmp[a] = matrix[b];
					
					a++; // Next matrix_tmp position
					
					b++; // Next matrix position
					
				} else { // Next matrix position
					
					b++;
					
				}
				
			}				
			
		} else {
			
			b += lenght; // Next matrix position, skipping the whole row
			
		}
		
	}	

}
