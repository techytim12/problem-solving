/*
 ============================================================================
 Name        : CountingValleys.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int n,i,j;
	char str[1000000];
	int dc=0,uc=0,count=0;


	printf("Enter n: ");
	scanf("%d",&n);

	printf("Enter string: ");
	scanf("%s",str);


	for (i=0; i<n-1; i++)
	{
		if (str[i] == 'D')
			dc++;
		else if (str[j] == 'U')
			uc++;

		if (dc==uc)
			count++;
	}


	printf("\n\n%d",count);

	return EXIT_SUCCESS;
}
