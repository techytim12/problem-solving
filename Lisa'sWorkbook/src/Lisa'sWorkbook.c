#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,k;
	scanf("%d%d",&n,&k);

	int arr[n],p[k] = {0},i,j,m,x,page=1,count=0;
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);


	for (i=0; i<n; i++)
	{

		for (j=0,m=1; j<k,m<=arr[i]; j++,m++)
			p[j] = arr[i] - (arr[i]-m);

		for (x=0; x<k; x++)
			{
				if (p[x] == page)
					count++;
			}

		j=-1;
		for(x=0; x<k; x++)
			p[x] = 0;

		if (p[j-1] == arr[i])
			page++;

	}

	printf("%d",count);


	return EXIT_SUCCESS;
}
