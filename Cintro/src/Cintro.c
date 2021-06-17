#include <stdio.h>
#define MAX_LIMIT 40

int main() {

	char ch;
	char s[MAX_LIMIT];
	char sen[MAX_LIMIT];

	scanf("%c",&ch);
	scanf("%s",s);
	scanf("%[^\n]%*c", sen);

	printf("%c\n%s\n%s",ch,s,sen);



	return 0;
}
