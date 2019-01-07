#include "darray.h"

int main(int argc, char* argv[])
{
	DARRAY(int) test;
	da_init(test);
	int a = 1;
	da_push_back(test, &a);
	int a0 = *test.array;
	da_free(test);
	return 1;
}