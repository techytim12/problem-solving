#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n;

		printf("Enter how many rows needed: ");
		scanf("%d",&n);

		for(i=1; i<=n; i++)
		{
			for(j=1; j<=(40-i); j++)
			{
				printf(" ");
			}

			for (k=1; k<=((2*i)-1); k++)
			{
				printf("*");
			}
			printf("\n");
		}
	return EXIT_SUCCESS;
}
