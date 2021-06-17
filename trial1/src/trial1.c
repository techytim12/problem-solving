#include <stdio.h>
#include <stdlib.h>

int main(){


	int sum=0;
	int i=4950;
	int sq = i*i;
	int oldsq=sq;
	int counter=0;


	while (sq>0)
	{
		sq=sq/10;
		counter++;
	}
	sq=oldsq;

	printf("\n square = %d",sq);
	printf("\n n counter= %d",counter);

	int count = counter/2;
	count++;
	int r;

	if (counter %2 ==0)
	{
		while(count>1)
		{
			r = sq%10;
			sum = sum*10 + r;
			sq=sq/10;
			count--;
		}
	}
	else if (counter %2 != 0)
	{
		while(count>0)
		{
			r = sq%10;
			sum = sum*10 + r;
			sq=sq/10;
			count--;
		}
	}

	printf("\n secondhalf_rev= %d\n firsthalf= %d",sum,sq);

	int secondhalf=0;
	while(sum>0)
	{
		r = sum%10;
		secondhalf = secondhalf*10 + r;
		sum=sum/10;
	}

	if (secondhalf+sq == i)
		printf("Yes");
	else
		printf("Nope");


	return 0;
}
