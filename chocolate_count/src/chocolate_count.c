
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i,j,sum,count;
	int sum_value=0;
	int count_value=0;

	printf("Enter n: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	printf("Enter the sum & count: ");
	scanf("%d%d",&sum,&count);

	int old_count = count;
	i=0;
	j=0;

	while (i < n)
	{
		while (j < count)
		{
			sum_value = sum_value + a[j];
			j++;
		}

		printf("\n %d ",sum_value);
		if (sum_value == sum)
		{
			count_value+=1;

		}
		sum_value=0;
		i++;
		j=i;
		count = count + 1;
	}

	printf("\n\n%d",count_value);

	return EXIT_SUCCESS;
}
