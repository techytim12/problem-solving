/*
 ============================================================================
 Name        : scores.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n;

	printf("Enter n: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements:");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	int min = a[0];
	int max = a[0];
	int minc=0;
	int maxc=0;

	i=1;

	while (i < n)
	{
		if (a[i] < min)
		{
			min = a[i];
			minc+=1;
		}
		else if (a[i] > max)
		{
			max = a[i];
			maxc+=1;
		}

		i++;
	}

	printf("%d %d",maxc,minc);

	return EXIT_SUCCESS;
}
