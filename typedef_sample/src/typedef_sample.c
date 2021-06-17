
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	typedef int Array[5];

	Array x = {10,34,56,78,90};
	Array y = {23,56,54,33,45};

	for (int i=0; i<5; i++)
		printf("\n%d",x[i]);

	printf("\n*****************\n");

	for (int i=0; i<5; i++)
		printf("\n%d",y[i]);


	return EXIT_SUCCESS;
}
