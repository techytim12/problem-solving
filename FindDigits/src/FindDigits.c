#include <stdio.h>
#include <stdlib.h>

int main() {

	int t;
	printf("Enter t: ");
	scanf("%d",&t);

	while (t--)
	{
		int n,r,oldn,count=0,flag=0;
		printf("Enter n: ");
		scanf("%d",&n);
		oldn=n;

		while (n>0)
		{
			r = n%10;

			if (r==0)
			{
				count++;
				flag++;
			}

			else if ((oldn % r) == 0)
				count++;

			n = n/10;
		}
		if (flag>0)
			printf("%d\n",count-flag);
		else
			printf("%d\n",count);
	}

	return 0;
}
