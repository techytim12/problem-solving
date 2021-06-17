/*
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i,temp=0,j;

    printf("ENter n: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter elements: ");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);


    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    printf("\nSorted Array:\n");
    for(i=0; i<n; i++)
        printf("%d\t",a[i]);

    printf("\n\n");

    i=0;

    printf("%d\n",n);

    while (i<n)
    {
        int count=0;
        int min;
        int k,p;
        min=a[n-1];

        for (j=0; j<n; j++)
        {
            if ((a[j] < min) && (a[j]!=0))
                min = a[j];
        }

        printf("\na[%d] : min=%d \n",i,min);

        for (j=0; j<n; j++)
        {
            p = a[j] - min;
            if (p<0 || p==0)
                a[j] = 0;
            else
                a[j] = p;
        }

        printf("\nafter minus\n");
        for(j=0; j<n; j++)
            printf("%d\t",a[j]);
        printf("\n\n");

        for (j=0; j<n; j++)
        {
            if (a[j] == 0)
            {
                for (k=j; k<n; k++)
                    a[k] = a[k+1];
                n--;
                i--;
                j--;
            }
        }

        printf("\nafter deleting 0 values, n=%d\n",n);
        for(j=0; j<n; j++)
            printf("%d\t",a[j]);
        printf("\n\n");



        for (j=0; j<n; j++)
        {
            if (a[j]>0)
                count++;
        }

        if (count>0)
        	printf("count:%d\n",count);

        i++;


    }

    return 0;
}*/




#include <stdio.h>

int main(){

	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int a[1002] = {0};

	for (int i=0; i<n; i++)
	{
		int c;
		scanf("%d",&c);
		a[c]++;
	}

	int t=n;
	for (int i=0; i<1002; i++)
	{
		if (a[i] > 0)
		{
			printf("%d",t);
			t = t - a[i];
		}
	}
	return 0;
}
