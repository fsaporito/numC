#include "combinatory.h"

// Simple Combinations
/*
 * Unordered Presentation Of A Group Of K Objects Without Repetition
 *
 *           | n |      n(n-1)(n-2)...(n-k+1)
 * 	C(n,k) = |	 |	=  ----------------------   ====> Bynomial Factor
 *           | k |			  k!
 *
 * Es: How Many Group Of 3 Letters Can You Form Using The Lowercase English Alphabeth?
 *
 *  alphabeth = {a,b,c,d,e,f,g,h,i,j,k,j,m,n,o,p,q,r,s,t,u,v,z}  ===> 26 letters
 *
 * n = 26
 * k = 3
 * n-k+1 = 26 - 3 + 1 = 24
 *
 *                     | 26 |   26*25*24
 *  C(n,k) = C(26,3) = |    | = --------- = 2600
 *                     | 3  |      3!
 */

long int comb_s (int n_comb_s, int k_comb_s) {

	long int result; // Result To Return

	result = bynomial_factor (n_comb_s,k_comb_s);

	return result;

}
