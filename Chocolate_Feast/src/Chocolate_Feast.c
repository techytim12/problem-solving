
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,c,m,w;

		scanf("%d%d%d",&n,&c,&m);

		w = n/c;

		int count = w;
		int r;

		while (w >= m)
		{
			if (w % m ==0)
			{
				w = w/m;
				count = count + w;
			}
			else
			{
				r = w%m;
				w = w/m;
				count = count + w + r;
			}
		}

		printf("%d\n",count);
	}


	return EXIT_SUCCESS;
}
