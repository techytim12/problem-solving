#include <stdio.h>

int main(){

    int n,time=1,value=3,end=3,ans=3,flag=0;

    scanf("%d",&n);

    for (time=2; time<=n; time++)
    {
    	if (flag == 1)
    		{
    			flag =0;
    			ans = value;
    			continue;
    		}
    	else
    		{
    			value = value - 1;
    			ans = value;
    		}



    	if (value ==1)
    	{
    		value = end * 2;
    		end = value;
    		flag = 1;
    	}
    }


    printf("%d",ans);

    return 0;
}
