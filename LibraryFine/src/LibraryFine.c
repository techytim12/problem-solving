#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int d1,d2,m1,m2,y1,y2;

	printf("ENter dates: ");
	scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);

	if ((d1==d2) && (m1==m2) && (y1==y2))
		printf("0");
	else if (y1<y2)
		printf("0");
	else if (y1>y2)
		printf("10000\n");
	else if ((y1==y2) && (m1==m2))
		printf("%d",15*(d1-d2));
	else if ((y1==y2) && (m1>m2))
		printf("%d",500*m1-m2);


	return EXIT_SUCCESS;
}
