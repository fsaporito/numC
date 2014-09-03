#include "combinatory.h"

// Dispositions With Repetitions
/*
 * Ordered Presentation Of A Group Of K Objects With Repetition
 *
 * D(n,k) = n^k
 *
 * Es: How Many Words Of 8 Letters I Can Compose With The LoweCase English Alphabet
 *
 * alphabeth = {a,b,c,d,e,f,g,h,i,j,k,j,m,n,o,p,q,r,s,t,u,v,z}  ===> 26 letters
 *
 * n = 26
 * k = 8
 *
 * D(26,8) = 26^8
 *
 */

long int disp_r (int n_disp_r, int k_disp_r) {

	long int result; // Result To Return

	result = pow (n_disp_r,k_disp_r);

	return result;

}
