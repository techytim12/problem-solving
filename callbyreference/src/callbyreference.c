#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=10, b=20;
	float c=30, d=40;

	printf("Before operations: a= %d c= %f\n",a,c);

	Operations(&a,&b,&c,&d);

	printf("  After operations: a= %d c= %f\n",a,c);
	return EXIT_SUCCESS;
}


void Operations(int *a, int *b, float *c, float *d)
{
	*a = *a * *b;
	*c = *d / *c;

	printf("After operations: a= %d c= %f\n",*a,*c);
}


