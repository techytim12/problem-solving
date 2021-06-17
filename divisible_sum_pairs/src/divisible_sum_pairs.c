#include <stdio.h>
#include <stdlib.h>

int main(void){

	int n,k,i,count=0;

	printf("Enter n & k: ");
	scanf("%d%d",&n,&k);

	int a[n];
	printf("Enter array elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	i=0;
	int j=i+1;

	while (i < n-1)
	{
		while (j < n)
		{
			if ( ((a[i] + a[j]) % k) == 0   )
			{
				count+=1;
			}
			j++;
		}
		i++;
		j = i+1;
	}

	printf("\n%d",count);

	return EXIT_SUCCESS;
}
