#include <stdio.h>
#include <stdlib.h>

typedef char* string;
string read(void);


int main(void) {
	string name;
	name = read();
	printf("Entered name is: %s",name);
	return EXIT_SUCCESS;
}


string read(void)
{
	string name;
	char ch[10];
	printf("Enter name: ");
	gets(ch);
	name = &ch;
	//printf("name= \n",name);
	return name;
}
