
#include "statistic_descriptive.h"

// Average Arithmetic
/*
 * Av = ( n1 + n2 + n3 ..... nk ) / k
 *
 */

double average_ari (double *vector_data, int lenght) { // Require vector_el_sum

	double sum;
	double result;

	sum = vector_el_sum (vector_data,lenght);

	result = sum / lenght;

	return result;

}


//  Ponderate Arithmetic Average
/*
 * Av = ( n1*f1 + n2*f2 + n3*f3 ..... nk*fk ) / ( f1 + f2 + f3 ....+ f4 )
 *
 */

double average_ari_pond (double *vector_data, double *vector_freq, int lenght) { // Require vector_el_sum && vector_vector_sum

	double freq_sum;
	double vector_freq_data[lenght]; // Vector Which Contains vector_data*vector_freq
	double vector_freq_data_sum; // Sum vector_freq_data's elements
	double result;

	vector_vector_mult (vector_data, vector_freq,vector_freq_data, lenght);

	vector_freq_data_sum = vector_el_sum (vector_freq_data, lenght);

	freq_sum = vector_el_sum (vector_freq, lenght);

	result = vector_freq_data_sum / freq_sum;

	return result;

}


