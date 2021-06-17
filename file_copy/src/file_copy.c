#include <stdio.h>


void main(){

	int ch;
	FILE *fp1, *fp2;
	fp1 = fopen("/home/thomas/Coding/C/input.txt", "r");
	fp2 = fopen("/home/thomas/Coding/C/output.txt", "w");

	while((ch=fgetc(fp1))!= EOF)
	{
		fputc(ch,fp2);
	}

	printf("Copied");
}
