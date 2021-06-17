#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a,b,i,arr[10000],flag=0;
	scanf("%d%d",&a,&b);

	for (i=a; i<=b; i++)
	{
		if (i %10 != 0 && ((i!=4950) || (i != 5050)))
		{
			int sum=0;

			int sq = i*i;
			int oldsq=sq;
			int counter=0;


			while (sq>0)
			{
				sq=sq/10;
				counter++;
			}
			sq=oldsq;
			//printf("\n n count= %d",counter);
			//printf("\n square = %d",sq);



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
			//printf("\n secondhalf_rev= %d\n firsthalf= %d",sum,sq);

			int secondhalf=0;
			while(sum>0)
			{
				r = sum%10;
				secondhalf = secondhalf*10 + r;
				sum=sum/10;
			}

			if (secondhalf+sq == i)
			{
				arr[flag] = i;
				flag++;
			}
		}
	}

	if (flag>0)
	{
		for (i=0; i<flag; i++)
			printf("%d ",arr[i]);
	}
	else
		printf("INVALID RANGE");
	return EXIT_SUCCESS;
}
