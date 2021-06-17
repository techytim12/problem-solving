#include <stdio.h>

int main(){

	int num1, num2;
	scanf("%d%d",&num1,&num2);

	while ((num1 && num2) > 0 && (num1 != num2) )
	{
		if (num1 > num2)
			num1 = num1 - num2;
		else
			num2 = num2 - num1;
	}

	if (num1 == 0)
		printf("%d",num1);
	else if (num2 ==0)
		printf("%d",num2);
	else if (num1 == num2)
		printf("%d",num1);

	return 0;
}
