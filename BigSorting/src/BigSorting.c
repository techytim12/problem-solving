#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned long long int n,i,j,temp;

	printf("Enter n: ");
	scanf("%llu",&n);
	unsigned long long int a[n];

	printf("Enter elements: ");
	for (i=0; i<n; i++)
		scanf("%llu",&a[i]);

	for (i=0; i<(n-1); i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("Sorted Array: ");
	for(i=0; i<n; i++)
		printf("\n\t%llu",a[i]);

	return EXIT_SUCCESS;
}
