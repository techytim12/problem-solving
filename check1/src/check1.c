
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int i,c,n,j,k=0;
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

	char ch[100][100];
	scanf("%d",&c);

	for (i=0; i<c; i++){
		scanf("%s",ch[i]);
	}

	for (i=0; i<c; i++){
		printf("%s ",ch[i]);
	}

	printf("\n");
	int y=0,x=0;
	for (i=0; i<c; i++){
		if (strcmp(ch[i],"RIGHT") == 0 && y<c){
			/*printf("inside right %d\n",i);*/
			y++;
			}
		else if (strcmp(ch[i],"LEFT") == 0 && y>0){
			/*printf("inside left %d\n",i);*/
			y--;
		}
		else if (strcmp(ch[i],"UP") == 0 && x>0){
			/*printf("inside up %d\n",i);*/
			x--;
		}
		else if (strcmp(ch[i],"DOWN") == 0 && x<c){
			/*printf("inside down %d\n",i);*/
			x++;
		}
	}

	printf("%d",arr[x][y]);




	return EXIT_SUCCESS;
}
