
#include "test.h"

int main ( int argc, char **argv ) {
	
	int res;

	res = test_matrix ();

	if (res == 1) {

		return 1;

	}
	
	res = test_statistic_descriptive ();

	if (res == 1) {

		return 1;

	}

	return 0;

}
