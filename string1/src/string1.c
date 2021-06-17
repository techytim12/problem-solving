#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,counter;
    char str[100000];
    scanf("%d",&n);
    while(n--)
        {
        counter=0;
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++)
            {
            if(str[i]==str[i+1])
                {
                counter++;
                }
            }
        printf("%d\n",counter);
        }
    return 0;
}
