#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,*arr;
	printf("Enter the size: ");
	scanf("%d",&n);

	arr = (int*) calloc(n,sizeof(int));

	if (arr == NULL)
		printf("No Memory");
	else
	{
		printf(" array elements are: ");
		for(int i =0; i<n; i++)
		{
			printf("%d",*(arr+i));
		}
	}


	return EXIT_SUCCESS;
}
