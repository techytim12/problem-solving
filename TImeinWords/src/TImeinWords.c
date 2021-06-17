#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int h,m;
	scanf("%d%d",&h,&m);

	char alpha[30][100] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};

	if (m==0)
		printf("%s o' clock",alpha[h-1]);
	else if (m <= 30)
	{
		if (m==15)
			printf("quarter past %s",alpha[h-1]);
		else if (m==30)
			printf("half past %s",alpha[h-1]);
		else
			printf("%s minutes past %s",alpha[m-1],alpha[h-1]);
	}
	else if (m>30)
	{
		if ((m == 45) && (h != 12))
			printf("quarter to %s",alpha[h]);
		else if ( (m==45) && (h==12))
			printf("quarter to %s",alpha[0]);
		else if (h==12)
			printf("%s minutes to 1",alpha[60-m-1]);
		else
			printf("%s minutes to %s",alpha[60-m-1],alpha[h]);
	}


	return EXIT_SUCCESS;
}
