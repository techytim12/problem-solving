#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char name[100][100];
	int price[1000];
	int weight[1000];
	int temp[100];
	int tempv;

	int n,i,k,count=0,j;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("ENter item names: ");
	for (i=0; i<n; i++)
		scanf("%s",name[i]);

	printf("Enter price: ");
	for (i=0; i<n; i++)
		scanf("%d",&price[i]);

	printf("enter weight: ");
	for (i=0; i<n; i++)
		scanf("%d",&weight[i]);
	printf("\n");

	i=0;

	for (j=0; j<n; j++)
	{
		if (strcmp(name[i],name[j]) == 0 )
		{
			if (price[i] == price[j])
			{
				if (weight[i] == weight[j])
				{
					count++;
					for (k=j; k<n; k++)
					{
						temp[i] = weight[j];
						weight[j] = weight[j+1];


					}
				}
			}
		}
	}

	return 0;
}
