#ifndef _TEST_H_

	#define _TEST_H_

	#include "stdio.h"
	
	#include "../Matrices/matrix.h"	
	
	#include "../StatisticDescriptive/statistic_descriptive.h"
	
	#define EPSILON 0.000001

	int test_matrix (void);
	
	int test_det (int test_number, int length);
	
	int test_statistic_descriptive (void);

#endif
