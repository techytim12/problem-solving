
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,m,j,d;
	scanf("%d%d",&n,&m);

	int c[m],a[n],max[n],value=0;


	for (i=0; i<n; i++)
		{
			a[i] = i;
			max[i] = n;
		}

	/*printf("\n A array\n");
	for(i=0; i<n; i++)
		printf(" %d",a[i]);

	printf("\n max array\n");
	for(i=0; i<n; i++)
		printf(" %d",max[i]); */


	for (i=0; i<m; i++)
		scanf("%d",&c[i]);

	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			d = a[i] - c[j];

			if (d<0)
				d = d*-1;

			if (d < max[i])
				max[i] = d;
		}
	}

	for (i=0; i<n; i++)
	{
		if (value<max[i])
			value = max[i];
	}

	printf("%d",value);

	return EXIT_SUCCESS;
}
