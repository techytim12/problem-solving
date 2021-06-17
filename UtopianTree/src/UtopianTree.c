/*
 ============================================================================
 Name        : UtopianTree.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,a[100],j;
	int h=1;

	printf("Enter n: ");
	scanf("%d",&n);

	printf("Enter the values: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
	j=1;

	for (i=0; i<n; i++,h=1)
	{
		for (j=1; j<=a[i]; j++)
			{
			if (j%2 == 0)
				h = h +1;
			else
				h = h*2;
			}
		printf("%d\n",h);
	}

	return EXIT_SUCCESS;
}
