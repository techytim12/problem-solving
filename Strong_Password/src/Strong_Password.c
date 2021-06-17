#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	char str[100];
	int n,i,dcount=0,lcount=0,ucount=0,spcount=0,tcount=0,sum,new_tcount;

	printf("Enter string: ");
	scanf("%s",str);

	n=strlen(str);
	for (i=0; i<n; i++)
	{
		if (   (str[i] >= '0') &&  (str[i] <= '9')    )
		{
			if (dcount!=1)
				dcount=1;
		}

		else if (   (str[i] >= 'a') &&  (str[i] <= 'z')  )
		{
			if (lcount!=1)
				lcount=1;
		}

		else if ( (str[i] >= 'A') &&  (str[i] <= 'Z') )
		{
			if (ucount!=1)
				ucount=1;
		}

		else if ( (str[i] == '!') || (str[i] == '@') || (str[i] == '#') ||  (str[i] == '$') || (str[i] == '%') ||  (str[i] == '^') ||  (str[i] == '&') ||  (str[i] == '*') ||  (str[i] == '(') ||  (str[i] == ')') ||  (str[i] == '-') || (str[i] == '+') )
		{
			if (spcount!=1)
				spcount=1;
		}
	}

	printf("dcount= %d  lcount= %d  ucount= %d  spcount=%d\n",dcount,lcount,ucount,spcount);

	tcount = dcount + lcount + ucount + spcount;
	printf("tcount= %d\n\n",tcount);


	if ( (n>=6) &&  (tcount==4)    )
		printf("0");

	else if ( (n<6) && (tcount!=4) )
	{
		new_tcount= 4-tcount;
		if (new_tcount+n >=6)
			printf("%d",new_tcount);
		else
		{
			sum = 6 - (new_tcount+n);
			printf("%d",new_tcount+sum);
		}
	}

	else if ( (n>=6)  && (tcount!=4))
		printf("%d",4-tcount);

	else if ((n<6) && (tcount==4) )
		printf("%d",6-n);

	return EXIT_SUCCESS;
}
