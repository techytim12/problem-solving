#include <stdio.h>
#include <string.h>

int main(){

	int a[26]={0},i,index;
	char str[100];

	scanf("%s",str);
	int l = strlen(str);

	for (i=0; i<l; i++)
		a[str[i]-97]++;

	for (i=0; i<l; i++)
	{
		if (a[str[i]-97] == 1)
		{
			index = i;
			break;
		}
	}

	printf("%d",index);

}
