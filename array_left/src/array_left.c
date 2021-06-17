#include <stdio.h>
#include <stdlib.h>

int main(void){

	int a[100],b[100];
	int i,n,x,j;

	printf("Enter n: ");
	scanf("%d",&n);

	printf("enter array: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	printf("Enter x: ");
	scanf("%d",&x);

	for (i=0; i<=x; i++)
		b[n-x+i] = a[i];

	for (i=x,j=0; i < n; i++,j++)
		b[j]=a[i];


	for (i=0; i<n; i++)
		printf(" %d ",b[i]);

	return EXIT_SUCCESS;
}
