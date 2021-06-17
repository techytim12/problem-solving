
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int t;
    scanf("%d",&t);

    while (t--)
    {
        int i,n,flag=0,lettercount=0,count=0;
        char ch[100],letters[26]={0};
        scanf("%d",&n);
        scanf("%s",ch);

        for (i=0; i<n; i++)
        {
            if (ch[i] == '_')
                flag=1;
            //if (ch[i] != '_')
                letters[ch[i]-65]++;
        }

        for (i=0; i<26; i++)
        	printf(" %d",letters[i]);

        for (i=0; i<26; i++)
        {
            if ( !(letters[i]==0 || letters[i]>1))
                lettercount=1;
        }


        printf("\ncount: %d",count);
        printf("\nascii: %d",letters[19]);

        if ((flag==1) && (lettercount==0))
            printf("YES\n");
        /*else if ((count==1) && (flag==1))
            printf("YES\n");*/
        else
            printf("NO\n");
    }

    return EXIT_SUCCESS;
}
