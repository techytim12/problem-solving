#include <stdio.h>
#include <string.h>

int main(){

	int i,j,n,a[30],max=0,area=1;
	char str[100];
	printf("Enter 26 heights: ");;
	for (i=0; i<26; i++)
		scanf("%d",&a[i]);

	printf("Enter the string: ");
	scanf("%s",str);
	n=strlen(str);

	for (i=0; i<n; i++)
	{
		j = str[i] - 97;

		if (a[j] > max)
		{
			max = a[j];
		}
	}

	area = max*n;

	printf("%d",area);



	return 0 ;

}
