/*
 ============================================================================
 Name        : DrawingBook.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,p;

	printf("Enter n & p:");
	scanf("%d%d",&n,&p);

	if (p == 1)
		printf("0");

	else if (p == (n-1))
		printf("1");

	else if ( p == n/2)
		printf("%d",n);

	else if (p < n/2)
		printf("%d",p/2);

	else if ( p > n/2)
		printf("%d",(n-p)/2);



	return EXIT_SUCCESS;
}
