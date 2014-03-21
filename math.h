/* math_fun.h */

#include <stdio.h>
#include <math.h>

#define maxlenght 30 // Max Number Of Raws Permitted
























// Matrix Print
/*
 * Print A Given Matrix
 * 
 */ 








// Average Arithmetic
/*
 * Av = ( n1 + n2 + n3 ..... nk ) / k
 * 
 */
double average_ari (double *vector_data, int lenght); // Require vector_el_sum



// Average Arithmetic Ponderate
/*
 * Av = ( n1*f1 + n2*f2 + n3*f3 ..... nk*fk ) / ( f1 + f2 + f3 ....+ f4 )
 * 
 */
double average_ari_pond (double *vector_data, double *vector_freq, int lenght); // Require vector_el_sum && vector_vector_sum



// Variation
/*
 * Variation = xi - Av
 * 
 */
void variation (double *vector_data, double *vector_variation, int lenght); // Require average_ari_pond



// Variance
/*
 * Variance = sum(variation(i)*variation(i)*freq(i))
 * 
 */
double variance (double *vector_data, double *vector_freq, int lenght); // Require vector_vector_mult && vector_el_sum && variation



// Standard Deviation
/*
 * Sd = sqrt(variance)
 * 
 */
double standard_deviation (double *vector_data, double *vector_freq, int lenght); // Require variance



/
