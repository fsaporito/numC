#ifndef _NUMC_H
#define _NUMC_H

#include "stdlib.h"
#include "math.h"

#ifndef _COMBINATORY_H_

	#define _COMBINATORY_H_



	// Bynomial Factor
	long int bynomial_factor (int n, int k); // Require Factorial


	// Simple Permutations
	long int perm_s (int n_perm_s); // Require Factorial


	// Permutations With Repetitions
	long int perm_r (int n_perm_r, int *rep, int letter);


	// Simple Dispositions
	long int disp_s (int n_disp_s, int k_disp_s);


	// Dispositions With Repetitions
	long int disp_r (int n_disp_r, int k_disp_r);


	// Simple Combinations
	long int comb_s (int n_comb_s, int k_comb_s); // Require bynomial_factor


	// Combinations With Repetition
	long int comb_r (int n_comb_r, int k_comb_r); // Require bynomial_factor


#endif

#ifndef _INTEG_H

	#define _INTEG_H
	

	inline void integ_rect (double (function) (double x), double extr_a, double extr_b, long int intervals_num, double *integ_first, double *integ_second);


	inline double integ_trap (double (function) (double x), double extr_a, double extr_b, long int intervals_num);


	inline double integ_cav_simpson (double (function) (double x), double extr_a, double extr_b, long int intervals_num);


#endif

#ifndef _MATRIX_H

	#define _MATRIX_H

	#define MAX_DIM 30 // Max Number Of Raws Permitted
	


	// Matrix Print
	inline void matrix_print (double matrix[], int lenght);


	// Matrix Determinant
	inline double matrix_det (double matrix[], int lenght);


	// SubMatrix Without Raw I And Column J
	inline void submatrix (double matrix[], double m_tmp[], int lenght, int I, int J);


#endif

#ifndef _NUMBER_THEORY_H

	#define _NUMBER_THEORY_H



	// Perfect Number
	inline int isPerfect (int number);


	// Prime Number
	inline int isPrime (int number); // Require math.h (sqrt)


	// Recursive Factorial
	long long int fact_recursive (int number);


	// Iterative Factorial
	inline long long int fact_iterative (int number);


#endif

#ifndef _ROOTS_H_

	#define _ROOTS_H_

	#define MAX_INTER 10000 // Max Number Of Iterations Permitted



	// Dicotomic Method
	inline double dicotomic (double extr_a, double extr_b, double (*function) (double x), double precision);  // Require absolute


	// Cords Method
	inline double cords (double extr_a, double extr_b, int mode, double (*function) (double x), double precision);


	// Newton Method
	inline double newton (double extr_a, double extr_b, double (*function) (double x), double (*deriv1) (double x), double (*deriv2) (double x), double precision); // Require absolute


#endif /* ROOTS_H_ */

#ifndef  STATISTIC_DESCRIPTIVE_H

	#define STATISTIC_DESCRIPTIVE_H



	/***************************/
	/* Central Tendency Values */
	/***************************/


	// Arithmetic Average
	double average_ari (double *vector_data, int lenght); // Require vector_el_sum

	// Ponderate Arithmetic Average
	double average_ari_pond (double *vector_data, double *vector_freq, int lenght); // Require vector_el_sum && vector_vector_mult && vector_num_div

	// Mode
	double mode (double *vector_data, int lenght);

	// Median
	double median (double *vector_data, int lenght);



	/***************************/
	/* Statistical Dispersion */
	/***************************/


	// Variation
	void variation (double *vector_data, double *vector_freq, double *vector_variation, int lenght); // Require average_ari_pond

	// Variance
	double variance (double *vector_data, double *vector_freq, int lenght); // Require vector_vector_mult && vector_el_sum && variation

	// Standard Deviation
	double standard_deviation (double *vector_data, double *vector_freq, int lenght); // Require variance

	// Absolute Mean Value
	double mean_abs (double *vector_data, double *vector_freq, int lenght);

	// Coefficient Of Variation
	double cv (double *vector_data, double *vector_freq, int lenght);



#endif

#ifndef _VECTOR_H_

	#define _VECTOR_H_


	// Vector Reversion
	void vector_reverse (double *vector, int lenght);


	// Vector Summation With Number
	void vector_num_sum (double *vector, double num, double *vector_result, int lenght);


	// Vector Subtraction With Number
	void vector_num_sub (double *vector, double num, double *vector_result, int lenght);


	// Vector Multiplication With Number
	void vector_num_mult (double *vector, double num, double *vector_result, int lenght);


	// Vector Division With Number
	void vector_num_div (double *vector, double num, double *vector_result, int lenght);


	// Vector Square Power
	void vector_square_pover (double *vector, double *vector_result, int lenght);


	// Vector Summation Of All Elements
	double vector_el_sum (double *vector, int lenght);


	// Vector Subtraction Of All Elements
	double vector_el_sub (double *vector, int lenght);


	// Vector Multiplication Of All Elements
	double vector_el_mult (double *vector, int lenght);


	// Vector Division Of All Elements
	double vector_el_div (double *vector, int lenght);


	// Vector Vector Summation ElementWise
	void vector_vector_sum (double *vector1, double *vector2, double *vector_result, int lenght);


	// Vector Vector Subtraction ElementWise
	void vector_vector_sub (double *vector1, double *vector2, double *vector_result, int lenght);


	// Vector Vector Multiplication ElementWise
	void vector_vector_mult (double *vector1, double *vector2, double *vector_result, int lenght);


	// Vector Vector Division ElementWise
	void vector_vector_div (double *vector1, double *vector2, double *vector_result, int lenght);


	// Vector Vector Inner Product
	void vector_vector_inner (double *vector1, double *vector2, double result, int lenght);


#endif

#endif

