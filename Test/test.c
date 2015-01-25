
#include "test.h"

int main ( int argc, char **argv ) {
	
	int res;

	res = test_matrix ();

	if (res == 1) {

		return 1;

	}

	return 0;

}
