/*
 ============================================================================
 Name        : perfectnum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);

	for(i=1; i<n; i++)
	{
		if (n % i == 0)
			sum = sum + i;
	}

	if (n == sum)
		printf("%d is a perfect number",n);
	else
		printf("%d isn't a perfect number",n);

	return EXIT_SUCCESS;
}
