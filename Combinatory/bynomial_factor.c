
#include "combinatory.h"

// Bynomial Factor
/*
 *   | n |      n(n-1)(n-2)...(n-k+1)
 * 	 |	 |	=  ----------------------
 *   | k |			  k!
 *
 * Result = -1 ---> Error
 */

long int bynomial_factor (int n, int k) { // Require Fact

	long int result = 1; // Result To Return
	int limit; // n-k+1
	long int k_fact; // K Factorial
	int t; // For Loop Variable

	// Parsing Arguments
	if ( k < 0 || n < k || k == 0) {

		result = -1; return result;

	}

	// n - k + 1
	limit = n - k + 1;
	
	// Factorial And Productorial Calculation
	#pragma omp parallel sections
	{
		// K Factorial
		#pragma omp section
		{ k_fact = fact_iterative (k); }

		// Product Of All Terms From n To The limit
		#pragma omp section
		{ 
		
			for (t = n; t >= limit; t--) {

				result *= t;

			}
			
		}
		
	}

	result /= k_fact;

	// Return Result
	return result;

}


