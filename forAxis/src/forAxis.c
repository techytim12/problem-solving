#include <stdio.h>
#include <string.h>

int main(){

	char word[1000],key[100];
	int i,j,n1,n2,x,y,d,count=0;
	gets(word);
	gets(key);
	n1 = strlen(word);
	int mem = n1;
	n2 = strlen(key);

	for (i=0; i<n1; i++)
	{
		for (j=0; j<n2; j++)
		{
			if (word[i] == key[j])
			{
				for (x=i,y=j; y<n2; x++,y++)
				{
					if (word[x] != key[y])
						break;
					else
						count++;

					if (count == n2)
					{
						for (d=i; d<n1; d++)
						{
							if ((d+n2+1) > n1)
								word[d] = '\0';
							else
								word[d] = word[d+n2+1];
						}
						n1 = n1 - n2;
						i--;
						count=0;
					}
				}
				count=0;
			}

		}
	}

	if (mem == n1)
		printf("No key");
	else
		printf("%s",word);

	return 0;
}
