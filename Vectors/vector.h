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
