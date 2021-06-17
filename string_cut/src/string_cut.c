#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
char ch[100];
int i,j,n,count=0;

printf("Enter string:");
scanf("%s",ch);
n=strlen(ch);

for (i=0; i<n; i++,count++)
{
  if  ( (ch[i]=='s') && (ch[i+1]=='h') )
   {
     if ((ch[i+2]==' ') || (ch[i+2]=='\0'))
     {
    	 for (j = i-count; j <=i+1; j++)
   	         printf ("%c",ch[j]);
     }
     count=0;
   }
}

return EXIT_SUCCESS;
}
