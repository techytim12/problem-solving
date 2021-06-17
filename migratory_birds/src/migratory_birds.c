#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i,j,n,temp,count=1;

	printf("Enter n: ");
	scanf("%d",&n);

	int a[n],b[5]={0,0,0,0,0};
	printf("Enter the elements: ");
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	for (i=0; i < n-1; i++)
	{
		for (j=i+1; j < n; j++)
		{
			if ( a[i] > a[j]  )
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("sorted array: \n");
	for (i=0; i<n; i++)
		printf("\t%d",a[i]);

	printf("\n\n");

	i=0;
	j=1;
	int k=0;


	while (i <= (n-1))
	{
		while (j < n)
		{
			if (a[i] == a[j])
			{
				count+=1;
			}
			j++;
		}
		printf("\n count of %d is %d\n",a[i],count);
		b[k] = count;
		i = i+count;
		j=0;
		j = i+1;
		count=1;
		k++;

	}

	printf("\nB array: \n");
		for (i=0; i<5; i++)
			printf("\t%d",b[i]);

	int max=0;

	for (i=0; i< 4; i++)
	{
		if ( b[i] == b[i+1]  )
		{
			if ( b[i] > b[max] )
			{
				max = i;
			}
		}
		else if ( b[i] < b[i+1]  )
		{
			if ( b[max] < b[i+1]  )
			{
				max = i+1;
			}
		}
	}

	printf("\n\n%d",max+1);


	return EXIT_SUCCESS;
}
