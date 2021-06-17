
#include <stdio.h>
#include <string.h>

int main(){

	int t;
	scanf("%d",&t);

	while (t--)
	{
		int i,n,k;
		char str[100],str1[100];
		scanf("%s",str);
		n = strlen(str);

		scanf("%s",str1);
		int n1 = strlen(str1);

		for (i=0; i<n; i++)
		{
			for (int j=0; j<n1; j++)
			{
				if ( str[i] == str1[j])
				{
					for (k=i; k<n; k++)
					{
						str[k] = str[k+1];
					}
					n--;
					i--;
				}
			}
		}

		printf("\n%s",str);
	}

	return 0;
}
