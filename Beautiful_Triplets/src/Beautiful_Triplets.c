#include <stdio.h>
#include <stdlib.h>

int main(){

	int arr_count,d,arr[1000000];
    scanf("%d%d",&arr_count,&d);

    int i,j,k,count=0;

    for (i=0; i<arr_count; i++)
        scanf("%d",&arr[i]);


    for (i=0; i<arr_count-2; i++)
    {
        for (j=i+1; j<arr_count-1; j++)
        {
            if ( arr[j] - arr[i] == d )
            {
                for (k=j+1; k<arr_count; k++)
                {
                    if ( arr[k] - arr[j] == d )
                        count++;
                }
            }
        }
    }

    printf("\n\n %d",count);

	return 0;
}
