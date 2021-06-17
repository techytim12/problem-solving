#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){



	int i,j,n,count;
	char ch[100];

	printf("Enter string: ");
	scanf("%s",ch);
	n = strlen(ch);

	for (i=0; i<n; i++)
	{
		if (ch[i] == ch[i+1])
		{
			count++;
			for (j=i; j<n; j++)
			{
				ch[j] = ch[j+1];
			}
			n--;
			i--;
		}
	}

	printf("Count: %d",count);
	return EXIT_SUCCESS;
}
