
#include <stdio.h>
#include <string.h>

int main(){

	int i,n,flag=0;
	char str[100];
	scanf("%s",str);
	n=strlen(str);

	for (i=0; i<n/2; i++)
	{
		if (str[i] != str[n-1-i])
			flag=1;
	}

	if (flag==0)
		printf("Palindrome");
	else
		printf("Not Palindrome");


	return 0;
}
