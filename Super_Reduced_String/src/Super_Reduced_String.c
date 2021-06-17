#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	char str[1000];
	int i,j,l;

	printf("Enter the string: ");
	scanf("%s",str);

	l = strlen(str);
	for (i=0; i<l; i++ )
	{
		if (str[i] == str[i+1])
		{
			for (j=i; j<l; j++)
			{
				str[j] = str[j+2];
			}
			i=-1;
			l = strlen(str);
		}
	}

	if (strlen(str) == 0)
		printf("Empty String");
	else
		printf("%s",str);


	return EXIT_SUCCESS;
}
