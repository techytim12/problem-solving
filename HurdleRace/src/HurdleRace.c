/*
 ============================================================================
 Name        : HurdleRace.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,a[100],n,k;
	int max=0;

	printf("Enter n & k: ");
	scanf("%d%d",&n,&k);

	printf("Enter the elements; ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	for (i=0; i<n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}

	if (max > k)
		printf("%d",max-k);
	else
		printf("0");


	return EXIT_SUCCESS;
}
