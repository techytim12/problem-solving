
#include <stdio.h>
#include <stdlib.h>

void main() {

	int r,n,c,i,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	int temp=n;

	while (n>0)
	{
		r = n%10;
		c = r*r*r;
		sum =sum +c;
		n =n / 10;
	}
	n=temp;
	if (sum==n)
		printf("Armstrong");
	else
		printf("Not Armstrong");

	return EXIT_SUCCESS;
}
