#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){


	char str[100];
	int n,i,count=1;

	printf("Enter string: ");
	scanf("%s",str);

	n = strlen(str);

	for (i=0; i<n; i++)
	{
		if ( (str[i] >= 'A') && ( str[i] <= 'Z'   )   )
		{
			count++;
		}
	}

	printf("%d",count);


	return EXIT_SUCCESS;
}
