#include <stdio.h>
#include <stdlib.h>

int main(void){

	char str[30];
	int len;
	printf("Enter a string: ");
	gets(str);
	len = StrLen(str);
	printf("Length = %d",len);
	return EXIT_SUCCESS;
}

int StrLen(char x[])
{
	int count=0,i=0;

	while(x[i] != '\0')
	{
		count++;
		i++;
	}

	return count;
}
