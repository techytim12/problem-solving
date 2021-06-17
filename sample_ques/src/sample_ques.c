#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){


	char ch1[100],ch2[100];
	int i,j,k,n1,n2;

	printf("Enter 1st string: ");
	scanf("%s",ch1);

	printf("Enter 2nd string: ");
	scanf("%s",ch2);

	n1=strlen(ch1);
	n2=strlen(ch2);



	for (i=0; i<n2; i++)
	{
		for (j=0; j<n1; j++)
		{
			if (ch2[i] == ch1[j])
			{
				for (k=j; k<n1; k++)
				{
					ch1[k] = ch1[k+1];
				}
				n1--;
				i--;
			}
		}
	}

	printf("%s",ch1);
}
