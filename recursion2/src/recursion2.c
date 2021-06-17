#include <stdio.h>
#include <stdlib.h>

int fact (int);

int main(void) {
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int result = fact(n);
	printf("%d",result);
	return EXIT_SUCCESS;
}


int fact (int n)
{
	int res;

	if (n==0)
		res =1;
	else
		res = n * fact(n-1);

	return res;
}
