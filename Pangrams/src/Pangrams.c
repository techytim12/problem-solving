#include<stdio.h>
int main()
{
    char str[50];
    int i;
    /*count array is used to find the count of each character in the sentence*/
    int count[26]={0};              //intiallizing all elements of array with 0
    printf("enter the sentence");
    gets(str);

    /*Ascci Values
      A-65
      a-97
      white space - 32
    */

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
            continue;                   //skip if white space

        /*Count
        index 0 - a,A
        index1 - b,B
        ...
        */
        if(str[i]>96)                   //If small letter
            count[str[i]-97] +=1;       //increment the count
       else                             //If capital letter
            count[str[i]-65] +=1;
    }
    for(i=0;i<26;i++)
    {
        /*If any element in count array is zero, then it is not Panagram*/
        if(count[i]==0)
          {
             printf("Not Panagram");
             exit(-1);
          }
    }
        printf("Panagram");
}
