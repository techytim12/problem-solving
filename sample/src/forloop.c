#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int i,j,k=0,n,c;

	scanf("%d%d",&n,&c);
	int arr[n][n];
	char ch[100][100];

	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			arr[i][j] = k;
			k++;
		}
	}

	/*for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/

	for (i=0; i<c; i++)
	{
		scanf("%s",ch[i]);
	}

	for (i=0; i<c; i++)
	{
		printf("%s ",ch[i]);
	}

	int x=0,y=0;

	/*00 01 02
	10 11 12
	20 21 22*/

	for (i=0; i<c; i++)
	{
		if (strcmp(ch[i],"RIGHT" == 0) && y<c)
		{
			printf("RIGHT\n");
			y++;
		}
		else if (strcmp(ch[i],"LEFT" == 0) && y>0)
		{
			printf("LEFT\n");
			y--;
		}
		else if (strcmp(ch[i],"UP" == 0) && (x>0))
		{
			printf("UP\n");
			x--;
		}
		else if (strcmp(ch[i],"DOWN" == 0) && (x<c))
		{
			printf("DOWN\n");
			x++;
		}
	}

	printf("%d",arr[x][y]);


	return EXIT_SUCCESS;
}
