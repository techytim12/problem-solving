

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[1000]= {0};

	int i,n;

	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];

	printf("Enter elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	for (i=0; i<n; i++)
		arr[a[i]]++;


	printf("\n\narr[i]");
	for (i=0; i<1000; i++)
		printf("\t %d ",arr[i]);

	int max=0;
	for (i=0; i<1000; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}


	printf("\nmax:%d\n",max);
	printf("%d",n-max);





	return EXIT_SUCCESS;
}
