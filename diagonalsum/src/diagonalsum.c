
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,a[10][10],lr=0,rl=0,p,q;
	printf("Enter n: ");
	scanf("%d",&n);

	printf("ENter array values: ");

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0,j=0; i<n; i++,j++)
	{
		lr = lr + a[i][j];
	}

	printf("LR = %d\n",lr);


	p=0;
	q= n-1;

	while ((p<n) && (q>=0))
	{
		rl = rl +a[p][q];
		p++;
		q--;
	}


	printf("RL = %d\n",rl);

	int result = lr - rl;

	 if (result<0)
	    {
	        result = result * -1;
	    }

	 printf("result= %d",result);



	return EXIT_SUCCESS;
}
