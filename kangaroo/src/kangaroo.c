#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,j,x1,x2,v1,v2;
	int flag=0;
	int n;

	printf("Enter the values: ");
	scanf("%d%d%d%d",&x1,&v1,&x2,&v2);

	if ( ( (x2 > x1) && (v2 > v1) ) || ( (x1 > x2) && (v1 > v2) ) )
		printf("NO");

	else
	{
		i=0,j=0;

		while (n < 10000)
		{
			x1 = x1 + v1;
			x2 = x2 + v2;
			if (x1 == x2)
				{
					printf("YES");
				}

			i++;
			j++;
		}


	}
}
