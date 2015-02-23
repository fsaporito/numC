#include "test.h"

int test_statistic_descriptive () {
	
	double data[7] = {1.0, 4.0, 5.0, 9.0, 10.0, 12.0, 15.0};
	double freq[7] = {8.0, 1.0, 4.0, 3.0, 19.0, 11.0, 18.0};
	
	int i = 0; // Test Counter
	
	printf ("\n##############################\n");
	printf ("TEST STATISTIC DESCRIPTIVE\n\n");
	
	printf ("\nDATA: 1 4 5 9 10 12 15\n");
	printf ("FREQ: 8 1 4 3 19 11 18\n\n");
	
	i++;
	printf ("[Test %i] Arithmetic Average", i);
	
	double avg = average_ari (data, 7);
	
	printf ("  %i", (int)avg);
	
	if (abs(avg - 8.0) > EPSILON) {
	
		printf ("  ERROR!!! expected = 8\n");
		
		return 1;
		
	} else {
		
		printf ("  OK\n");
		
	}
	
	
	i++;
	printf ("[Test %i] Ponderate Arithmetic Average", i);
	
	double avg_pond = average_ari_pond (data, freq, 7);
	
	printf ("  %lf", avg_pond);
	
	if (abs(avg_pond - 11.625) > EPSILON) {
	
		printf ("  ERROR!!! expected = 11.625\n");
		
		return 1;
		
	} else {
		
		printf ("  OK\n");
		
	}
	
	
	i++;
	printf ("[Test %i] Mode", i);
	
	double mod = mode (data, 7);
	
	printf ("  = %i", (int)mod);
	
	if (abs(mod - 15.0) > EPSILON) {
	
		printf ("  ERROR!!! expected = 15\n");
		
		return 1;
		
	} else {
		
		printf ("  OK\n");
		
	}
	
	
	i++;
	printf ("[Test %i] Median", i);
	
	double med = median (data, 7);
	
	printf ("  = %i", (int)med);
	
	if (abs(med - 9.0) > EPSILON) {
	
		printf ("  ERROR!!! expected = 9\n");
		
		return 1;
		
	} else {
		
		printf ("  OK\n");
		
	}
	
	
	i++;
	printf ("[Test %i] Variance", i);
	
	double var = variance (data, freq, 7);
	
	printf ("  = %lf", var);
	
	if (abs(var - 1414.25) > EPSILON) {
	
		printf ("  ERROR!!! expected = 1414.25\n");
		
		return 1;
		
	} else {
		
		printf ("  OK\n");
		
	}
	
	
	i++;
	printf ("[Test %i] Standard Deviation", i);
	
	double sd = standard_deviation (data, freq, 7);
	
	printf ("  = %lf", sd);
	
	if (abs(sd - 37.606515) > EPSILON) {
	
		printf ("  ERROR!!! expected = 37.606515\n");
		
		//return 1;
		
	} else {
		
		printf ("  OK\n");
		
	}
	
	
	i++;
	printf ("[Test %i] Absolute Mean", i);
	
	double mean = mean_abs (data, freq, 7);
	
	printf ("  = %i", (int)mean);
	
	if (abs(mean - 28.0) > EPSILON) {
	
		printf ("  ERROR!!! expected = 28.0\n");
		
		return 1;
		
	} else {
		
		printf ("  OK\n");
		
	}
	
	
	i++;
	printf ("[Test %i] Coefficient Of Variation", i);
	
	double coeff_var = cv (data, freq, 7);
	
	printf ("  = %lf", coeff_var);
	
	if (abs(coeff_var - 3.234969) > EPSILON) {
	
		printf ("  ERROR!!! expected = 3.234969\n");
		
		return 1;
		
	} else {
		
		printf ("  OK\n");
		
	}


	return 0;

}
