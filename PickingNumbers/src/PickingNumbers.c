#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,n,j,a[100],count=1;
	int max=0,temp;

	printf("Enter n: ");
	scanf("%d",&n);

	printf("Enter elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (  (a[j]-a[i] == 0) || (a[j]-a[i] == 1) )
				count++;
		}
		if (count > max)
			max=count;
		count=1;
	}

	printf("%d",max);

	return 0;
}
