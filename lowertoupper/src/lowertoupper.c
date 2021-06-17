#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[30];
	printf("Enter string: ");
	gets(str);

	int i=0;

	while(str[i]!='\0')
	{
		if (str[i]>='A' && str[i]<='Z')
			str[i] = str[i] + 32;

		i++;
	}

	printf("New String: %s",str);
	return EXIT_SUCCESS;
}
