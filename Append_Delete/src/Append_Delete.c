#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int i,n1,n2,j,k;
	char str1[100], str2[100];
	int count=0,diff=0;

	printf("Enter 2 strings: ");
	scanf("%s%s",str1,str2);
	n1=strlen(str1);
	n2=strlen(str2);


	int max=0;
	if (n1>n2)
	{
		max=n1;
		diff=n1-n2;
	}
	else
		max=n2;

	printf("Enter k: ");
	scanf("%d",&k);

	for (i=0; i<n2; i++)
	{
		if (str1[i] != str2[i])
		{
			for (j=i; j<n2; j++)
			{
				str1[j] = str2[j];
				count++;
			}
		}
	}

	if ((count*2+diff) <= k)
		printf("Yes");
	else
		printf("No");


	return EXIT_SUCCESS;
}
