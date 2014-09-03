#ifndef _MATRIX_H

	#define _MATRIX_H

	#define MAX_DIM 30 // Max Number Of Raws Permitted
	
	#include "stdio.h"
	#include "math.h"


	// Matrix Print
	inline void matrix_print (double matrix[], int lenght);


	// Matrix Determinant
	inline double matrix_det (double matrix[], int lenght);


	// SubMatrix Without Raw I And Column J
	inline void submatrix (double matrix[], double m_tmp[], int lenght, int I, int J);


#endif

