
#include "functions.h"

// Absolute

/*
 * |a| = a
 *
 */

inline double absolute (double number) {

	if ( number >= 0 ) {

		return number;

	} else {

		return ((-1)*number);

	}

}

