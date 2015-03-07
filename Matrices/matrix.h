#ifndef _MATRIX_H

	#define _MATRIX_H

	#define MAX_DIM 30 // Max Number Of Raws Permitted
	
	#include "stdio.h"
	#include "math.h"


	// Matrix Print
	inline void matrix_print (double matrix[], int lenght);
	

	// SubMatrix Without Raw I And Column J
	inline void submatrix (double matrix[], double m_tmp[], int lenght, int I, int J);


	// Swaps Row I And Row J
	inline void swap_row (double matrix[], double m_tmp[], int row_num, int col_num, int I, int J);


	// Swaps Column I And Column J
	inline void swap_col (double matrix[], double m_tmp[], int row_num, int col_num, int I, int J);


	// Gauss Algorithm To Create A Skeleton Matrix
	/* To Implement */
	inline void gauss (double matrix[], double m_tmp[], int row_num, int col_num);


	// Gauss-Jordan Algorithm To Create A Skeleton Matrix
	/* To Implement */
	inline void gauss_jordan (double matrix[], double m_tmp[], int row_num, int col_num);


	// Matrix Determinant
	inline double matrix_det (double matrix[], int lenght);


	// Matrix Trace
	/* To Implement */
	inline double matrix_trace (double matrix[], int lenght);


	// Matrix Rank
	/* To Implement */
	inline double matrix_rank (double matrix[], int lenght);

	
	// Matrix Transpose
	/* To Implement */
	inline double matrix_transpose (double matrix[], double matrix_transposed[], int row_num, int col_num);
	
	
	// Square Matrix Transpose
	/* To Implement */
	inline double matrix_transpose_square (double matrix[], double matrix_transposed[], int lenght);
	
	
	// Matrix Invert
	/* To Implement */
	inline double matrix_invert (double matrix[], double matrix_inverse[], int lenght);
	
	
	// Check If The Matrix Is Invertible
	/* To Implement */
	inline int is_invertible (double matrix[], int lenght);
	
	
	// Check If The Matrix Is Symmetric
	/* To Implement */
	inline int is_symmetric (double matrix[], int lenght);
	

	// Check If The Matrix Is AntiSymmetric
	/* To Implement */
	inline int is_antisymmetric (double matrix[], int lenght);
	
	
	// Check If The Matrix Is Orthogonal
	/* To Implement */
	inline int is_orthogonal (double matrix[], int lenght);


#endif

