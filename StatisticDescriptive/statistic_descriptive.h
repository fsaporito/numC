
#ifndef STATISTIC_DESCRIPTIVE_H

	#define STATISTIC_DESCRIPTIVE_H

	#include "../Vectors/vector.h"


	/***************************/
	/* Central Tendency Values */
	/***************************/


	// Arithmetic Average
	double average_ari (double *vector_data, int lenght); // Require vector_el_sum

	// Ponderate Arithmetic Average
	double average_ari_pond (double *vector_data, double *vector_freq, int lenght); // Require vector_el_sum && vector_vector_mult && vector_num_div

	// Mode
	double mode (double *vector_data, int lenght);

	// Median
	double median (double *vector_data, int lenght);



	/***************************/
	/* Statistical Dispersion */
	/***************************/


	// Variation
	void variation (double *vector_data, double *vector_variation, int lenght); // Require average_ari_pond

	// Variance
	double variance (double *vector_data, double *vector_freq, int lenght); // Require vector_vector_mult && vector_el_sum && variation

	// Standard Deviation
	double standard_deviation (double *vector_data, double *vector_freq, int lenght); // Require variance

	// Absolute Mean Value
	double mean_abs (double *vector_data, double *vector_freq, int lenght);

	// Coefficient Of Variation
	double cv (double *vector_data, double *vector_freq, int lenght);



#endif
