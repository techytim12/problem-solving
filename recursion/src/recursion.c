
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,res;
	printf("Enter the number: ");
	scanf("%d",&n);
	res = fact(n);
	printf("Factorial of %d = %d",n,res);
	return EXIT_SUCCESS;
}

int fact(int n)
{
	int res;

	if (n==0)
		res=1;
	else
		res = n * fact(n-1);

	return res;
}
