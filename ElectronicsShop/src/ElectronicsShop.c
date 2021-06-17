#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,j,b,k,u,km[1000000],um[1000000];

	printf("ENter b,k,u: ");
	scanf("%d%d%d",&b,&k,&u);

	printf("Enter km: ");
	for (i=0; i<k; i++)
		scanf("%d",&km[i]);

	printf("Enter um:");
	for (i=0; i<u; i++)
		scanf("%d",&um[i]);

	int max=0;
	int sum=0;

	for (i=0; i<=k; i++)
	{
		for (j=0; j<=u; j++)
		{
			sum = km[i] + um[j];

			if ((max < sum) && (sum < b))
				max = sum;
		}
	}

	printf("\nMAX=%d\n",max);

	if ((max<=b) && (max!=0))
		printf("max:%d",max);
	else if (max==0)
		printf("-1");

	return 0;
}
