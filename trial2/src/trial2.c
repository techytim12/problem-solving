#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,k;
	scanf("%d%d",&n,&k);

	int arr[n],i,j,m,x,page=1,count=0,diff;
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	int p[k];
	i=0;
	m=1;

	for (i=0; i<n; i++)
	{

		while (m<=arr[i])
		{

			for (j=0; j<k; j++,m++)
			{
				diff = arr[i]-m;
				//printf("\n diff: %d",diff);
				if (diff >= 0)
					p[j] = arr[i] - diff;
			}

			printf("\n");
			for (x=0; x<k; x++)
				printf(" %d",p[x]);


			for (x=0; x<k; x++)
				{
					if (p[x] == page)
					{
						printf("\n\n page: %d",page);
						count++;
					}
				}

			page+=1;;

			for (x=0; x<k; x++)
				p[x] = 0;


		}
		m=1;
		printf("\n count: %d",count);

	}



	return EXIT_SUCCESS;
}
