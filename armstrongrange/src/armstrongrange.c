
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int n,limit,r,c,sum=0;
	printf("Enter the limit: ");
	scanf("%d",&limit);


	for(n=0; n<=limit; n++)
	{
		int temp=n;
		sum=0;
		while(n>0)
		{
			r = n % 10;
			c = r*r*r;
			sum =sum +c;
			n = n / 10;
		}
		n=temp;
		if(n==sum)
		{
			printf("Armstrong Number: %d\n",n);
		}
	}
	return EXIT_SUCCESS;
}
