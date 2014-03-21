#include "combinatory.h"

// Simple Permutations
/*
 * Ordered Presentation Of A Group Of Distint Objects Without Repetition
 *
 * P = n!
 *
 * Es: Anagrams Of The Word function
 * lenght = 8
 * P(8) = lenght! = 8!
 *
 */

long int perm_s (int n_perm_s) { // Require Fact

	long int result; // Result To Return

	result = fact_iterative (n_perm_s);

	return result;

}
