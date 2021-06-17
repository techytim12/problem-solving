/*
 ============================================================================
 Name        : Batterycharge.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,a[100];

	printf("Enter n: ");
	scanf("%d",&n);

	printf("Enter elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	int charge=50;

	for (i=0; i<n; i++)
	{
		charge = charge + a[i];
		printf("\ncharge= %d",charge);

		if (charge > 100)
			charge =100;
	}

	printf("\n\n%d",charge);

	return EXIT_SUCCESS;
}
