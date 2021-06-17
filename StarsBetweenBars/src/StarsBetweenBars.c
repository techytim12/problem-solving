#include <stdio.h>
#include <string.h>

int main(){

	char ch[100];
	printf("Enter string: ");
	scanf("%s",ch);
	int i,j,n,count=0,s=1;

	printf("Enter size of start and end array: ");
	scanf("%d",&n);
	int start[n];
	int end[n];
	int ac[100]={0},arr=0;

	printf("Enter start array elemts:");
	for (i=0; i<n; i++){
		scanf("%d",&start[i]);
	}
	printf("Enter end array elemts:");
	for (i=0; i<n; i++){
		scanf("%d",&end[i]);
	}

	for (i=0; i<n; i++)
	{
		for (j=start[i]; j<end[i]; j++ )
		{
			if (ch[j] == '|')
			{
				while (ch[j+s] == '*')
				{
					count++;
					s++;
				}
				if (ch[j+s] == '|')
				{
					ac[arr] = count;

				}
			}
			arr++;
			count=0;
			s=1;
		}
		/*printf("\n");*/
	}
	for (i=0; i<100; i++)
	{
		if (ac[i]!= 0)
		{
			printf("%d ",ac[i]);
		}
	}



	return 0;
}
