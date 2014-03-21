
#ifndef STATISTIC_DESCRIPTIVE_H

	#define STATISTIC_DESCRIPTIVE_H

	#include "../Vectors/vector.h"


	/***************************/
	/* Central Tendency Values */
	/***************************/

	// Arithmetic Average
	inline  double average_ari (double *vector_data, int lenght); // Require vector_el_sum

	//  Ponderate Arithmetic Average
	double average_ari_pond (double *vector_data, double *vector_freq, int lenght); // Require vector_el_sum && vector_vector_sum




	/***************************/
	/* Statistical Dispersion */
	/***************************/


	// Variation
	inline void variation (double *vector_data, double *vector_variation, int lenght); // Require average_ari_pond

	// Variance
	double variance (double *vector_data, double *vector_freq, int lenght); // Require vector_vector_mult && vector_el_sum && variation

	// Standard Deviation
	double standard_deviation (double *vector_data, double *vector_freq, int lenght); // Require variance



#endif
