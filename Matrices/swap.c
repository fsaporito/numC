#include "matrix.h"


// Swaps Row I And Row J
inline void swap_row (double matrix[], double m_tmp[], int row_num, int col_num, int I, int J) {

	int i = 0; // For Loop Variable

	for (i = 0; i < (row_num)*(col_num); i++) {

		m_tmp[i] = matrix[i];

	}
	
	if ( (I > row_num) || (J > row_num) || ( I == J) ) {

		return;

	} else {
		
		for (i = (I*col_num); i < (I*(col_num) + col_num); i++) {
			
			m_tmp[i] = matrix[i+(J-I)*col_num];

		}
		
		for (i = (J*col_num); i < (J*(col_num) + col_num); i++) {
			
			m_tmp[i] = matrix[i+(I-J)*col_num];

		}
		
	}


}


// Swaps Column I And Column J
inline void swap_col (double matrix[], double m_tmp[], int row_num, int col_num, int I, int J) {

	int i = 0; // For Loop Variable

	for (i = 0; i < (row_num)*(col_num); i++) {

		m_tmp[i] = matrix[i];

	}
	
	if ( (I > col_num) || (J > col_num) || ( I == J) ) {

		return;

	} else {
		
		for (i = I; i <= ((row_num-1)*col_num + I); i += col_num) {
			
			m_tmp[i] = matrix[i+(J-I)];

		}
		
		for (i = J; i <= ((row_num-1)*col_num + J); i += col_num) {
			
			m_tmp[i] = matrix[i+(I-J)];

		}
		
	}

}

