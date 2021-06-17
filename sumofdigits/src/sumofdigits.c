/*
 ============================================================================
 Name        : sumofdigits.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,r,sum=0;

	printf("Enter the num: ");
	scanf("%d",&n);

	while (n != 0) {
	        sum = sum + n % 10;
	        n = n / 10;
	    }

	printf("Sum = %d",sum);
	return EXIT_SUCCESS;
}
