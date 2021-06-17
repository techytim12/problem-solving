/*
 ============================================================================
 Name        : trial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,a[100],catA,catB;

		printf("Enter n: ");
		scanf("%d",&n);

		printf("Enter elements: ");
		for (i=0; i<3*n; i++)
			scanf("%d",&a[i]);

		for (i=0; i < 3*n; i+=3)
		{
			catA = a[i] - a[i+2];
			if (catA<0)
				catA = catA*-1;
			catB = a[i+1] - a[i+2];
			if (catB<0)
				catB = catB*-1;
			if (catA < catB)
				printf("Cat A");
			else if (catA > catB)
				printf("Cat B");
			else
				printf("Mouse C");
		}
	return EXIT_SUCCESS;
}
