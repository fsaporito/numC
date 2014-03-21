#ifndef _NUMBER_THEORY_H

	#define _NUMBER_THEORY_H

	#include <math.h>


	// Perfect Number
	inline int isPerfect (int number);


	// Prime Number
	inline int isPrime (int number); // Require math.h (sqrt)


	// Recursive Factorial
	long long int fact_recursive (int number);


	// Iterative Factorial
	inline long long int fact_iterative (int number);


#endif
