/*
 ============================================================================
 Name        : Service.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,t,i,a,b,arr[100000],j,min;

	printf("Enter n & t:");
	scanf("%d%d",&n,&t);

	printf("Enter elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&arr[i]);

	for (i=0; i<t; i++)
	{
		printf("Enter cases: ");
		scanf("%d%d",&a,&b);
		min=1000000;

		for (j=a; j<=b; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
			}
		}
		printf("%d\n",min);
	}

	return EXIT_SUCCESS;
}
