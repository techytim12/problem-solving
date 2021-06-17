#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,a[100],i,j,k,count=0;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for (i=0; i<n; i++ )
        scanf("%d",&a[i]);

    for (i=0; i<(n-1); i++ )
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                k=i;

                while (k < j)
                {
                    a[k] = a[k+1];
                    k++;
                }
                k--;
                n = n-1;

                while (k < n+2)
                {
                    a[k] = a[k+2];
                    k++;
                }
                n= n-1;
                i=-1;
            }
        }
    }

    printf("%d",count);

    return 0;
}
