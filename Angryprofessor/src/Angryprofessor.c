#include <stdio.h>
#include <stdlib.h>

int main(){


	int i,j,a[100],n,k,t,count;

	//printf("Enter t: ");
	scanf("%d",&t);

	i=0;

	while (i<t)
	{
		count=0;
		//printf("Enter n & k; ");
		scanf("%d%d",&n,&k);

		//printf("Enter elements: ");
		for (j=0; j<n; j++)
			scanf("%d",&a[j]);

		for (j=0; j<n; j++)
		{
			if (a[j] <= 0)
				count++;
		}

		if (count < k)
			printf("YES");
		else if (count == k)
			printf("NO");
		else if (count > k)
			printf("NO");

		i++;
	}

	return 0;
}
