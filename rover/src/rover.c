#include <stdio.h>
#include <stdlib.h>


int main(){

	int i,j,k=0,n;

	scanf("%d",&n);
	int arr[n][n];

	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			arr[i][j] = k;
			k++;
		}
	}

	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	char cmds[100];
	printf("ENter chars");
	gets(cmds);
	printf("%s",cmds);

	return 0;
}
