#include "combinatory.h"

// Simple Dispositions
/*
 * Ordered Presentation Of A Group Of K Objects Without Repetition
 *
 * D(n,k) = n(n-1)(n-2)....(n-k+1)
 *
 * Es: How Many Number Of 5 NUmber I Can Compose With The NUmbers Between 1 and 8 {1,2,3,4,5,6,7,8}
 *
 * (n - k + 1) = (8 - 5 + 1 ) = 4
 * D(8,5) = 8*7*6*5*4
 *
 */

long int disp_s (int n_disp_s, int k_disp_s) {

	long int result; // Result To Return
	int limit; // n-k+1
	int t; // For Loop Variable

	limit = n_disp_s - k_disp_s + 1;
	result = 1;

	for ( t = n_disp_s; t >= limit; t--) {

		result *= t;

	}

	return result;

}
