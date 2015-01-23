#ifndef _MATRIX_H

	#define _MATRIX_H

	#define MAX_DIM 30 // Max Number Of Raws Permitted
	
	#include "stdio.h"
	#include "math.h"


	// Matrix Print
	inline void matrix_print (double matrix[], int lenght);


	// Matrix Determinant
	inline double matrix_det (double matrix[], int lenght);
	
	
	// Matrix Trace
	inline double matrix_trace (double matrix[], int lenght);
	
	
	// Matrix Rank
	inline double matrix_rank (double matrix[], int lenght);


	// SubMatrix Without Raw I And Column J
	inline void submatrix (double matrix[], double m_tmp[], int lenght, int I, int J);
	
	
	// Matrix Transpose
	inline double matrix_transpose (double matrix[], double matrix_transposed[], int row, int colomn);
	
	
	// Square Matrix Transpose
	inline double matrix_transpose_square (double matrix[], double matrix_transposed[], int lenght);
	
	
	// Matrix Invert
	inline double matrix_invert (double matrix[], double matrix_inverse[], int lenght);
	
	
	// Check If The Matrix Is Invertible
	inline int is_invertible (double matrix[], int lenght);
	
	
	// Check If The Matrix Is Symmetric
	inline int is_symmetric (double matrix[], int lenght);
	
	// Check If The Matrix Is AntiSymmetric
	inline int is_antisymmetric (double matrix[], int lenght);
	
	
	// Check If The Matrix Is Orthogonal
	inline int is_orthogonal (double matrix[], int lenght);


#endif

