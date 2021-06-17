#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *ptr;
	ptr = fopen("/home/thomas/Coding/C/test.txt", "r");
	if (ptr == NULL)
		printf("File not found");
	else
	{
		printf("File FOund at %u location\n",ptr);
	}

	int ch;

	while ((ch = fgetc(ptr))!= EOF)
	{
		printf("\n%c",ch);
	}


	return EXIT_SUCCESS;
}
