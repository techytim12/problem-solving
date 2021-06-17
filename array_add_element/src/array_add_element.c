#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i,a[50],value,loc;

	printf("Enter the n: ");
	scanf("%d",&n);

	printf("Enter %d values: ",n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);

	//print current array values
	printf("Current array values are:\n");
	for(i=0; i<n; i++)
		printf("%d\t",a[i]);

	printf("\nEnter the value & position to be added: ");
	scanf("%d%d",&value,&loc);

	for(i=n-1; i>=loc-1; i--)
		a[i+1] = a[i];

	a[loc-1] = value;

	//new array
	printf("\nNew array values are:\n");
		for(i=0; i<=n; i++)
			printf("%d\t",a[i]);

	return EXIT_SUCCESS;
}
