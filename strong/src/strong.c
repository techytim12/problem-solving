/*
 ============================================================================
 Name        : strong.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n1,r,i,n,fact=1,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	n1=n;

	while(n>0)
	{
		fact=1;
		r = n %10;
		for(i=1; i<=r; i++)
		{
			fact = fact*i;
		}
		sum = sum + fact;
		n = n/ 10;
	}
	if(n1==sum)
		printf("Strong");
	else
		printf("Not Strong");
	return EXIT_SUCCESS;
}
