#ifndef _ROOTS_H_

	#define _ROOTS_H_

	#define MAX_INTER 10000 // Max Number Of Iterations Permitted

	#include "stdlib.h" // abs


	// Dicotomic Method
	inline double dicotomic (double extr_a, double extr_b, double (*function) (double x), double precision);  // Require absolute


	// Cords Method
	inline double cords (double extr_a, double extr_b, int mode, double (*function) (double x), double precision);


	// Newton Method
	inline double newton (double extr_a, double extr_b, double (*function) (double x), double (*deriv1) (double x), double (*deriv2) (double x), double precision); // Require absolute


#endif /* ROOTS_H_ */
