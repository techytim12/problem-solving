#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char str[100000];
	long long i,l,n,count=0,x,r;
	printf("Enter string: ");
	scanf("%s",str);
	printf("Enter n: ");
	scanf("%lld",&n);
	l=strlen(str);

	for (i=0; str[i]!='\0'; i++)
		if (str[i] == 'a')
			count++;

	x= n/l;
	count = count * x;
	r = n % l;


		for (i=0; i<r; i++)
		{
			if (str[i] == 'a')
				count++;
		}

	printf("%lld",count);

	return EXIT_SUCCESS;
}
