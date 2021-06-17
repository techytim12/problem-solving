
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i,a[102],count=0;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	i=0;
	while (i < n-1)
	{
		if (a[i+2] == 0)
			i = i + 2;
		else if (a[i+1] == 0)
			i = i + 1;

		count++;
	}

	printf("%d",count);

	return EXIT_SUCCESS;
}
