#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s,t,a,b,m,n,i,app[100],orr[100];
    int app_count=0, orr_count=0;

    printf("Enter values for s & t: ");
    scanf("%d%d",&s,&t);

    printf("Enter locations for A & B: ");
    scanf("%d%d",&a,&b);

    printf("Enter no. of apples & oranges fell: ");
    scanf("%d%d",&m,&n);

    printf("Enter the values for m: ");
    for (i=0; i<m; i++)
    {
        scanf("%d",&app[i]);
        if (app[i] >= (s-a))
                {
                    app_count+=1;
                }
    }

    printf("Enter the values for n: ");
    for (i=0; i<n; i++)
    {
        scanf("%d",&orr[i]);
        if (orr[i] <= (t-b))
                {
                    orr_count+=1;
                }
    }

    printf("%d\n%d",app_count,orr_count);

    return EXIT_SUCCESS;
}
