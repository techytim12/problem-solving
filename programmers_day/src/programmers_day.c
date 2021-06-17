#include <stdio.h>
#include <stdlib.h>

int main(void){

	int n;

	//printf("Enter the year: ");
	scanf("%d",&n);

	if (n < 1918)
	{
		if ( (n % 4) == 0)
			printf("12.09.%d",n);
		else
			printf("13.09.%d",n);
	}
	else if (n > 1918 && n <= 2700)
	{
		if ( (  (n%400) == 0 ) || (((n %4) == 0) && ((n%100)!=0)))
			printf("12.09.%d",n);
		else
			printf("13.09.%d",n);
	}
	else if ( n== 1918)
		printf("26.09.%d",n);

	return EXIT_SUCCESS;
}
