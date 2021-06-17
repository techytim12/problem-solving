/*
 ============================================================================
 Name        : taumbday.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t;

	printf("Enter t: ");
	scanf("%d",&t);

	for (int i=0; i<t; i++)
	{
		int b,w,bc,wc,z;

		printf("Enter b & w :");
		scanf("%d%d",&b,&w);

		printf("ENter bc & wc :");
		scanf("%d%d",&bc,&wc);

		printf("Enter z: ");
		scanf("%d",&z);

		if ((z>=bc) && (z>=wc))
			printf("%d\n",bc*b+wc*w);
		else
		{
			if (bc<=wc)
				printf("%d\n",bc*b+bc*w+w*z);

			else if (wc<=bc)
				printf("%d\n",wc*w+wc*b+z*b);
		}
	}
	return EXIT_SUCCESS;
}
