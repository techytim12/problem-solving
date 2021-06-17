
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char a[30], b[30];

	int i,lb,la;

	printf("Enter 1st string: ");
	gets(a);
	printf("Enter 2nd string: ");
	gets(b);

	la = strlen(a);
	lb = strlen(b);
	i=0;
	while (i <= lb)
	{
		a[la+i]=b[i];
		i++;
	}


	printf("Merged string: %s",a);
	return EXIT_SUCCESS;
}
