
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long a,b,x,y,i,j,cu,sq,arsq[100]={0},arcu[100]={0},ss=0,cc=0;
	scanf("%ld%ld%ld%ld",&a,&b,&x,&y);

	for(i=a; i<=b; i++)
	{
		for (j=x; j<=y; j++)
		{
			cu = j*j*j;
			sq = j*j;

			if (cu == i){
				arcu[cc] = i;
				cc++;
			}

			if (sq == i){
				arsq[ss] = i;
				ss++;
			}
		}
	}
	printf("cubes: ");
	for (i=0; i<10; i++){
		if (arcu[i]!= 0){
			printf("%ld ",arcu[i]);
		}
	}
	printf("\n");

	printf("squares: ");
		for (i=0; i<50; i++){
			if (arsq[i]!=0){
				printf("%ld ",arsq[i]);
			}
		}

	return EXIT_SUCCESS;
}
