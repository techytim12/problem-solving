#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x,n,i,q,a[100000],b[100000];

	printf("Enter the n: ");
	scanf("%d",&n);

	printf("Enter x: ");
	scanf("%d",&x);

	printf("Enter q: ");
	scanf("%d",&q);
	int queries[q];

	printf("Enter elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	printf("Enter q values: ");
	for (i=0; i<q; i++)
		scanf("%d",&queries[i]);

	for (i=0; i<n-x; i++)
		b[i+x] = a[i];

	for (i=0; i<x; i++)
		b[i] = a[n-x+i];

	//B array
	printf("\n\n");
	/*for (i=0; i<n; i++)
		printf("\t%d",b[i]); */

	for (i=0; i<q; i++)
		printf("%d\n",b[queries[i]]);


	return EXIT_SUCCESS;
}
