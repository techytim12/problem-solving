#include <stdio.h>
#include <stdlib.h>

int sum(int,int);

int main(void) {
	int (*ptr) (int,int);
	int r;
	ptr = &sum;
	r = ptr(10,20);
	printf("Result = %d", r);
	return EXIT_SUCCESS;
}


int sum(int x, int y)
{
	int z= x+y;
	return z;
}
