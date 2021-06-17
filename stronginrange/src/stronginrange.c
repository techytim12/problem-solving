/*
 ============================================================================
 Name        : stronginrange.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,limit,k,r,fact=1,sum=0;
	printf("Enter the limit: ");
	scanf("%d",&limit);

	for(k=1; k<=limit; k++)
	{
		sum=0;
		int k1=k;
		while (k>0)
		{
			r = k % 10;
			fact=1;
			for(i=1; i<=r; i++)
			{
				fact = fact*i;
			}
			sum = sum + fact;
			k = k/10;
		}
		k=k1;
		if (sum==k)
			printf("Strong number is : %d\n",k);
	}
	return EXIT_SUCCESS;
}
