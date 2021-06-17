#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	char str[100];
	int i,n,count=0;

	printf("Enter the string: ");
	scanf("%s",str);
	n = strlen(str);

	for (i=0; i<n; i++)
	{
		if (i%3 == 0)
		{
			if (str[i]!='S')
				count++;
		}

		else if ((i+2)%3 == 0)
		{
			if (str[i]!='O')
				count++;
		}

		else if ((str[i]!='S'))
			count ++;
	}

	printf("%d",count);

	return EXIT_SUCCESS;
}
