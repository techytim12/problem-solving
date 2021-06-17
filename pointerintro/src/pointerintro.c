#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int a = 100;
	int* ptr;
	ptr = &a;

	printf("Value of a= %d\n", a);

	printf("a address: %u\n",&a);

	printf("value of ptr:(address of a) : %u\n",ptr);

	printf("address of ptr: %u\n",&ptr);

	printf("*ptr value, value inside the address ptr holds: %d\n",*ptr);

	printf("value inside a from address value *(&i) %d",*(&a));



	return EXIT_SUCCESS;
}
