#include <stdio.h>
#include <string.h>

int main(){

	char str[100];
	printf("Enter string: ");
	scanf("%s",str);

	int a,b,i,count=0;
	printf("Enter the range: ");
	scanf("%d%d",&a,&b);

	for (i=0; i<strlen(str); i++)
	{
		if (str[i] == 'a')
		{
			count++;
		}
	}

	printf("%d",count);

	return 0;
}
