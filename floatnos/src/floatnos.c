
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,arr[100];
	float ncount,pcount,zeros;
	float pr,nr,zr,n;

	//printf("Enter n: ");
	scanf("%f",&n);

	//printf("Enter elemts");
	for(i=0; i<n; i++)
	    {
	        scanf("%d",&arr[i]);
	    }

	    for (i=0; i<n; i++)
	    {
	        if (arr[i] < 0)
	        {
	            ncount++;
	        }
	        else if (arr[i]>0)
	        {
	            pcount++;
	        }
	        else
	        {
	            zeros++;
	        }
	    }

	    pr = pcount/n;
	    nr = ncount/n;
	    zr = zeros/n;

	    printf("%f\n%f\n%f\n",pr,nr,zr);
	return EXIT_SUCCESS;
}
