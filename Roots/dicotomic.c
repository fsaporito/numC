// Dicotomic

#include "roots.h"

inline double dicotomic (double extr_a, double extr_b, double (*function) (double x), double precision) { // Require absolute

	double A;
	double B;
	double medium[MAX_INTER];
	double M;
	int inter = 0; // Iteration Number

	A = function (extr_a);
	B = function (extr_b);

	medium[0] = (extr_a + extr_b)/2;
	M = function (medium[0]);

	if( M == 0. ) { 
		
		return medium[0]; 
		
	}

	if( A*M < 0. ) { 
		
		extr_b = medium[0]; 
		B = M; 
		
	}

	if( B*M < 0. ) { 
		
		extr_a = medium[0]; 
		A = M; 
		
	}

	do {

		inter++;

		medium[inter] = (extr_a + extr_b)/2;
		M = function (medium[inter]);

		if( M == 0. ) { 
			
			break; 
			
		}

		if( A*M < 0. ) { 
			
			extr_b = medium[inter]; 
			B = M; 
			
		}

		if( B*M < 0. ) { 
			
			extr_a = medium[inter]; 
			A = M; 
			
		}
		

	} while (abs(medium[inter - 1] - medium[inter]) > precision || inter < MAX_INTER);

	return medium[inter];

}
