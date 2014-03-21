
#ifndef _INTEG_H

	#define _INTEG_H

	#include "../Functions/functions.h"


	inline void integ_rect (double (function) (double x), double extr_a, double extr_b, long int intervals_num, double *integ_first, double *integ_second);


	inline double integ_trap (double (function) (double x), double extr_a, double extr_b, long int intervals_num);


	inline double integ_cav_simpson (double (function) (double x), double extr_a, double extr_b, long int intervals_num);


#endif
