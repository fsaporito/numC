/* cords.c */

#include "roots.h"

inline double cords (double extr_a, double extr_b, int mode, double (*function) (double x), double precision) {


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
// Variables Definition
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

	double funz_extr_a; // F(a)
	double funz_extr_b; // F(b)
	int i; // For Loop Variable
	double X_intersec; // Intersection  Between The Function And The X Axis
	double Y_intersec; // Image Of The Intersection
	double root; // Result
	int inter = 0; // Iteration Number


	do {

		inter++;

		funz_extr_a = function (extr_a); // F(extr_a)
		funz_extr_b = function (extr_b); // F(extr_b)

		// Intersection Between The Line Between The Two Points And The X Axis
		X_intersec=((extr_a*(funz_extr_b - funz_extr_a) - extr_b*(extr_b - funz_extr_a))/(funz_extr_b - funz_extr_a));
		Y_intersec = function (X_intersec); // Image Of The Intersection

		if ( (funz_extr_a*Y_intersec) > 0 ) { // Substitution Of extr_a With The New Point

			extr_a = X_intersec;

		}

		if ( (funz_extr_b*Y_intersec) > 0 ) { // Substitution Of extr_b With The New Point

			extr_b = X_intersec;

		}

	} while ( abs(Y_intersec) > precision  || inter < MAX_INTER);

	root = X_intersec;

	return root;


}
