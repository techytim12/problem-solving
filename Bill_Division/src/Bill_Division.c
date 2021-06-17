#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,i,k,b,a[100000];
	int sum=0,as;

	printf("Enter n& k: ");
	scanf("%d%d",&n,&k);

	printf("enter the elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	printf("enter b: ");
	scanf("%d",&b);

	for (i=0; i<n; i++)
		sum = sum + a[i];

	as = (sum - a[k]) / 2;

	//printf("anna share= %d",as);

	if (as == b)
		printf("Bon Appetit");
	else
		printf("%d",b-as);



	return 0;
}
