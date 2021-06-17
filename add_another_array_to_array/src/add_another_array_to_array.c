#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a[50],b[50],i,m,n,pos,value;

	printf("Enter the first & second array limits: ");
	scanf("%d%d",&m,&n);

	printf("Enter the first array %d elements: ",m);
	for(i=0; i<m; i++)
		scanf("%d",&a[i]);

	printf("Enter the second array %d elements: ",n);
		for(i=0; i<n; i++)
			scanf("%d",&b[i]);

	printf("\nFirst array is:\n");
		for(i=0; i<m; i++)
			printf("%d\t",a[i]);


	printf("\nEnter the position for insertion: ");
	scanf("%d",&pos);

	for (i=m-1; i>=pos; i--)
		a[i+n]=a[i];

	for (i=0; i<n; i++)
		a[pos+i]=b[i];

	printf("\nNew first array is:\n");
	for(i=0; i<m+n; i++)
		printf("%d\t",a[i]);

	return EXIT_SUCCESS;
}
