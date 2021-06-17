#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int h,m,s;
	char ch;

//printf("Enter the time: ");
	scanf("%d:%d:%d%c",&h,&m,&s,&ch);

	//printf("Entered time is: %02d:%02d:%02d%c\n\n",h,m,s,ch);


	if ((ch == 'A') || (ch == 'a'))
		{
			if (h == 12)
			{
				h = 00;
			}
		}

	if ((ch == 'P') || (ch == 'p'))
	{
		if ((h>=01) && (h<12))
		{
			h = h+12;
		}
	}

	printf("%04d:%02d:%02d",h,m,s);

	return EXIT_SUCCESS;
}
