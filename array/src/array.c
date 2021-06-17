#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a[5] = {50,40,30,20,10};
	int i;
	int large = a[4];

	for(i=3; i>=0; i--)
	{
//printf("hello\n");
		if (a[i] > large )
		{
			large = a[i];
			//printf("Large= %d\n",large);
		}
	}
	printf("Large= %d\n",large);
	return EXIT_SUCCESS;
}
