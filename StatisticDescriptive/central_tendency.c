
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


// Average Arithmetic Pondered
/*
 * Av = ( n1 + n2 + n3 ..... nk ) / k
 *
 */

double average_ari_pond (double *vector_data, double *vector_freq, int lenght) { // Require vector_el_sum && vector_vector_sum

	double sum;
	double result;

	sum = vector_el_sum (vector_data,lenght);

	result = sum / lenght;

	return result;

}



//  Mode
/*
 * Return The Highest Value
 *
 */

double mode (double *vector_data, int lenght) {

	double mode = vector_data[0];

	int i = 0; // For Loop Variable

	for (i = 1; i < lenght; i++) {

		if (vector_data[i] > mode) {

			mode = vector_data[i];

		}

	}

	return mode;

}



//  Median
/*
 * Return The Middle Value
 *
 */

double median (double *vector_data, int lenght) {

	double median = vector_data[0];

	if (lenght > 1) {

		if (lenght % 2 == 0) {

			double arr[2];

			arr[0] = vector_data[(int)((lenght-1)/2)];

			arr[1] = vector_data[(int)(lenght/2)];

			median = averge_ari (arr, 2);

		} else {

			median = vector_data[(int)(lenght/2)];

		}

	}

	return mode;

}

