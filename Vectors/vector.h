#ifndef _VECTOR_H_

	#define _VECTOR_H_


	// Vector Reversion
	void vector_reverse (double *vector, int lenght);


	// Vector Summation With Number
	inline void vector_num_sum (double *vector, double num, double *vector_result, int lenght);


	// Vector Subtraction With Number
	inline void vector_num_sub (double *vector, double num, double *vector_result, int lenght);


	// Vector Multiplication With Number
	inline void vector_num_mult (double *vector, double num, double *vector_result, int lenght);


	// Vector Division With Number
	inline void vector_num_div (double *vector, double num, double *vector_result, int lenght);


	// Vector Square Power
	inline void vector_square_pover (double *vector, double *vector_result, int lenght);


	// Vector Summation Of All Elements
	inline double vector_el_sum (double *vector, int lenght);


	// Vector Subtraction Of All Elements
	inline double vector_el_sub (double *vector, int lenght);


	// Vector Multiplication Of All Elements
	inline double vector_el_mult (double *vector, int lenght);


	// Vector Division Of All Elements
	inline double vector_el_div (double *vector, int lenght);


	// Vector Vector Summation ElementWise
	inline void vector_vector_sum (double *vector1, double *vector2, double *vector_result, int lenght);


	// Vector Vector Subtraction ElementWise
	inline void vector_vector_sub (double *vector1, double *vector2, double *vector_result, int lenght);


	// Vector Vector Multiplication ElementWise
	inline void vector_vector_mult (double *vector1, double *vector2, double *vector_result, int lenght);


	// Vector Vector Division ElementWise
	inline void vector_vector_div (double *vector1, double *vector2, double *vector_result, int lenght);


	// Vector Vector Inner Product
	inline void vector_vector_inner (double *vector1, double *vector2, double result, int lenght);


#endif
