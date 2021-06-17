#include<stdio.h>
#include<stdlib.h>

int main(void){
	int n,i,a[100],count=0;
	printf("Enter n: ");
	scanf("%d",&n);

	printf("Enter elements: ");
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);

	int number=0;
	int maximum=0;

	for (i=0; i<n; i++)
	{
		number = a[i];
		if (number > maximum)
		{
			maximum = number;
			count = 1;
		}
		else if (number == maximum)
		{
			count++;
		}
	}

	printf("\n%d",count);

	return EXIT_SUCCESS;


}
