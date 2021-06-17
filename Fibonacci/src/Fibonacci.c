

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,x=0,y=1;
	scanf("%d",&n);
	printf("%d %d ",x,y);
	int p = x+y;

	for (i=1; i<=n; i++)
	{
		printf("%d ",p);

		x = y;
		y = p;

		p = x + y;


	}

	return EXIT_SUCCESS;
}
