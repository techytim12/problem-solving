#include<stdio.h>
#include<stdlib.h>

int main(void){

	int num,r,sum=0,temp;

	printf("Enter the number: ");
	scanf("%d",&num);
	temp=num;

	while (num>0)
	{
		r = num % 10;
		sum = sum*10 + r;
		num = num / 10;
	}
	num=temp;

	if(num == sum)
		printf("Palindrome");
	else
		printf("Not Palindrome");

	return EXIT_SUCCESS;
}
