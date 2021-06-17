#include <stdio.h>
#include <stdlib.h>

int main(){


	int a,b,i,k;
	int oldi,r,sum=0,count=0;

	printf("Enter a,b,k: ");
	scanf("%d%d%d",&a,&b,&k);

	for (i=a; i<=b; i++)
	{
		oldi = i;
		while (i > 0)
		{
			r = i%10;
			sum = sum*10 + r;
			i = i/10;
		}
		printf("\norg: %d rev: %d",oldi,sum);

		if ((oldi - sum)%k ==0)
			count++;
		i = oldi;
		r=0;
		sum=0;
	}

	printf("%d",count);

	return 0;
}
