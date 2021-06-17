#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,limit,j,sum=0;
	printf("Enter the limit:");
	scanf("%d",&limit);

	for(i=0; i<=limit; i++)
	{
		sum=0;
		for(j=1; j<i; j++)
		{
			if(i % j == 0)
			{
				sum = sum + j;
			}
		}
		if (sum==i)
		{
			printf("Perfect number: %d\n",i);
		}
	}
	return EXIT_SUCCESS;
}
