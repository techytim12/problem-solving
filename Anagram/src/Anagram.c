#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int limit;
	scanf("%d",&limit);

	while(limit--)
	{
		char str[10000];
		int i,n;

		scanf("%s",str);
		n=strlen(str);

		if (n%2 !=0)
			printf("-1\n");

		else
		{
			int freq[26] = {0};

			for (i=0; i<n/2; i++)
				freq[str[i]-97]++;

			for (i=n/2; i<n; i++)
				freq[str[i]-97]--;

			int res=0;
			for (i=0; i<26; i++)
			{
				if (freq[i]>0)
					res = res + freq[i];
			}
			printf("%d",res);
		}

	}
	return EXIT_SUCCESS;
}
