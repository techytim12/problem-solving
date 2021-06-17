
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char str1[1000], str2[1000];
	int a[26]={0}, b[26]={0};
	int i,flag=0;

	printf("Enter two strings: ");
	scanf("%s%s",str1,str2);

	printf("%s %s\n\n",str1,str2);

	for(i=0; i<strlen(str1); i++)
		a[str1[i] - 97]++;

	for(i=0; i<strlen(str2); i++)
		b[str2[i] - 97]++;

	for (i=0; i<26; i++)
	{
		if (a[i] != b[i])
			flag=1;
	}

	if (flag==0)
		printf("Anagram");
	else
		printf("Not Anagram");

	return 0;
}
