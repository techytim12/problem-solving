
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int letters[26]={0},i;
	char str[100];

	scanf("%s",str);

	for (i=0; i<strlen(str); i++)
		letters[str[i]-65]++;

	for (i=0; i<26; i++)
		printf("%d",letters[i]);


	return EXIT_SUCCESS;
}
