#include <stdio.h>

int main(){

	int n;
	scanf("%d",&n);
	int ar[n];

	int i;

	for (i=0; i<n; i++)
		scanf("%d",&ar[i]);

	int a[100]={0},count=0;

	for (i=0; i<n; i++)
		a[ar[i]]++;


	/*printf("\n");
	for (i=0; i<=100; i++)
	{
		//if (a[i] != 0)
			printf("%d ",a[i]);
	}*/


	for (i=1; i<=100; i++){
			if (a[i] != 0)
				a[i] = a[i] / 2;
		}


	printf("\n");
	for (i=0; i<=100; i++)
	{
		if (a[i] != 0)
			printf("%d ",a[i]);
	}

	for (i=1; i<=100; i++){
			if (a[i] != 0 && a[i]<100)
				count = count + a[i];
		}

	printf("\n\n%d",count);

	return 0;
}
