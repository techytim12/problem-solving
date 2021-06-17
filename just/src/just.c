#include <stdio.h>

int main(){

	int i, a[5];

	printf("Enter numbers:");
	for(i=0; i<5; i++)
		scanf("%d",&a[i]);

	printf("Numbers are:");
	for (i=0; i<5; i++)
		printf("%d \t",a[i]);

	return 0;
}
