
#include "number_theory.h"

// isPerfect

/*
 * Perfect Number: equal to the sum of its proper positive divisors
 * 6 = 1 + 2 + 3
 * 28 = 1 + 2 + 4 + 7 + 14
 *
 * Return 0 ----> Number Is Perfect
 * Return 1 ----> Number Not Perfect
 *
 */

inline int isPerfect (int number) {

	if (number > 0) {

		long int i = 0;
		long int tmp = 0;

		for (i = 1; i <= (number/2); i++) {

			if (number%i == 0) {

				tmp += i;

			}

		}


		if (tmp != number) {  // Number Not Perfect

			return 1;

		} else {  // Perfect NUmber

			return 0;

		}

	} else {

		return 1;

	}

}
