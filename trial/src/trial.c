#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>


int main(void) {
	int n;
	printf("Enter n: ");
	scanf("%d",&n);

	int s;
	s = sqrt(n);

	printf("\n%d",s);

	return EXIT_SUCCESS;
}
