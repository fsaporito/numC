#include "combinatory.h"

// Combinations With Repetition
/*
 * Unordered Presentation Of A Group Of K Objects With Repetition
 *
 *             /  n  \      | n+k-1 |      n(n+1)(n+2)...(n+k+1)
 * 	C(n,k) =  |       |  =  |       |	=  ----------------------   ====> Bynomial Factor
 *             \  k  /      |   k   |			  k!
 *
 * Create All The Couples From This Group : {a,b,c}
 * aa
 * ab
 * ac
 * ba
 * bb
 * bc
 * ca
 * cb
 * cc
 *
 * n = 3
 * k = 2
 *
 * n+k-1 = 3+2-1 = 4
 * n-k+1 = 3-2+1 = 2
 *
 *             /  3  \      | 4 |       4*3*2
 * 	C(n,k) =  |       |  =  |   |	=  ------- = 12
 *             \  2  /      | 2 |		  2!
 *
 */

long int comb_r (int n_comb_r, int k_comb_r) {

	long int result; // Result To Return
	int new_n_comb_r; // n + k - 1

	new_n_comb_r = n_comb_r + k_comb_r - 1;

	result = bynomial_factor (new_n_comb_r,k_comb_r);

	return result;

}
