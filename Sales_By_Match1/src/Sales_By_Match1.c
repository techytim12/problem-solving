#include <stdio.h>
#include <stdlib.h>

int main(void){

	int a[100],i,j,n,count=0;

	printf("Enter n: ");
	scanf("%d",&n);

	printf("Enter elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	for (i=0; i<100; i++)
	{
		for (j=1; j<n; j++)
		{
			if (i == a[j])
			{
				count++;
			}
		}
	}

	if (count%2 == 0)
		printf("%d",(count/2)-1);
	else
		printf("%d",count/2);

	return EXIT_SUCCESS;
}
