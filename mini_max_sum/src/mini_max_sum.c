#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long i,temp=0,min_sum=0,max_sum=0,arr[100],j;
	printf("Enter the elements: ");
	    for (i=0; i<5; i++)
	    {
	        scanf("%ld",&arr[i]);
	    }

	    for (i=0; i<4; i++)
	    {
	    	for(j=i+1; j<5; j++)
	    	{
	    		if (arr[i] > arr[j])
	    			        {
	    			            temp = arr[i];
	    			            arr[i] = arr[j];
	    			            arr[j] = temp;
	    			        }

	    	}

	    }

	    printf("Sorted array: \n");
	    for(i=0; i<5; i++)
	    	printf("\t%ld",arr[i]);

	    for (i=0; i<4; i++)
	    {
	        min_sum = min_sum + arr[i];
	    }

	    for (i=4; i>=1; i--)
	    {
	        max_sum = max_sum + arr[i];
	        printf("\n max sum: %ld",max_sum);
	    }

	    printf("\n\nresult: %ld %ld",min_sum,max_sum);



	return EXIT_SUCCESS;
}
