
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char str[40];
	int len,i=0,temp;

	printf("Enter the string: ");
	gets(str);

	int j = strlen(str)-1;

	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;

		i++;
		j--;
	}
	printf("\nReversed string is: %s",str);
	return EXIT_SUCCESS;
}
