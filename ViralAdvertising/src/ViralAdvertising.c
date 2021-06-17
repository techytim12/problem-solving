#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,n,p,l,tl;

	printf("Enter n: ");
	scanf("%d",&n);

	p=5;
	l=2;
	tl=2;
	i=1;

	while (i<n)
	{
		p = p/2 * 3;
		l = p/2;
		tl = tl + l;

		i++;
	}


	printf("%d",tl);

	return 0;
}
