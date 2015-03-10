
#include "number_theory.h"

// isPrime

/*
 *  Return 0 ----> Prime
 *  Return 1 ----> Non Prime
 *
 */

inline int isPrime (int number) {

	if (number > 0) {

		int i; // For Cycle Variable
		int square;

		square =(int) sqrt(number);

		// Number Non Prime, Divisible By 2, Return 1
		if ( number%2 == 0 ) {

			return 1;

		}

		// Exclude 2 Multiplex
		for (i = 3; i <= square; i = i+2) {

			if (number%i == 0) {

				break;
				return 1;

			}

		}

		return 0; // Prime

	} else { // Negative Number, Not Prime

		return 1;

	}


}
