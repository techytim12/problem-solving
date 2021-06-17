
#include <stdio.h>

int main(){


	int i,j,n;
	char a[100][100];

	scanf("%d",&n);

	for (i=0; i<n; i++)
		scanf("%s",a[i]);

	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			if ( (i==0) || (i==n-1) || (j==0) || (j==n-1))
				printf("%c",a[i][j]);

			else if (a[i][j] > a[i][j-1] && a[i][j] > a[i-1][j] && a[i][j] > a[i][j+1] && a[i][j] > a[i+1][j])
				printf("X");
			else
				printf("%c",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
