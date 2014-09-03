#ifndef _COMBINATORY_H_

	#define _COMBINATORY_H_

	#include "../NumberTheory/number_theory.h" // Factorial Definition
	#include "math.h"


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
