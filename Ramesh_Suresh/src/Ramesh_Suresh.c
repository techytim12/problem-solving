#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100];

	printf("Enter string: ");
	gets(str);
	//fgets(str, sizeof(str),stdin);
	//printf("%s\n",str);

	int i,f,j,n;
	n=strlen(str);

	i=0;
	f=0;
	while (i <= n)
	{
		if ((str[i] == ' ') || (str[i] == '\0') )
		{
			if (  (str[i-2] == 's') && (str[i-1] == 'h') )
			{
				for (j=f; j<i; j++)
					printf("%c",str[j]);
				printf("\n");
			}
			f=i+1;
		}
		i++;
		//printf("i= %d\n",i);
	}

	return 0;
}
