#include "combinatory.h"



// Permutations With Repetitions
/*
 * Ordered Presentation Of A Group Of Distinct Objects With Repetition
 *
 * P = n! / [ k(1)! * k(2)! ...... * k(r)! ]
 *
 * Es: Anagrams Of The Word ortodox
 * lenght = 7
 * number of letters that repeat = 1 (letter o)
 * number of repetition per letter =  o ---> 3
 * Pr(7,3) = (lenght!)/(rep!) = 7! / 3!
 *
 * lenght ---> total object number
 * repetition ---> vector with how many times each object is repeated
 * 					es: ortodox ---> repetition = [3];
 * letter ---> how many objects repeat
 * 				es: ortodox ----> letter = 1  [letter o repeats]
 */

long int perm_r (int n_perm_r, int *rep, int letter) { // Require Fact

	long int result; // Result To Return
	long int k_fact;
	int i; // For Loop Variable

	result = fact_iterative (n_perm_r);

	for (i = 0; i < letter; i++) {

		k_fact = fact_iterative (rep[i]);

		result /= k_fact;

	}

	return result;

}


