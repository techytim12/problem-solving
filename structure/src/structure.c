#include <stdio.h>
#include <stdlib.h>

struct Emp{
	int eno;
	char ename[20];
	float esal;
};

int main(void) {

	struct Emp e[3];

	printf("Enter the EMP details:? Press Enter");

	for (int i=0; i<3; i++)
	{
		printf("Emp %d: enter eno, ename & esal: ",i);
		scanf("%d%s%f",&e.eno,e.ename,&e.esal);

	}

	printf("Emp details: \n");
	for (int i=0; i<3; i++)
	{

		printf("\n%d%s%f",e.eno[i],e.ename[i],e.esal[i]);

	}

	return EXIT_SUCCESS;
}



