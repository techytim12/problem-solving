
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit;
	printf("Enter limit: ");
	scanf("%d",&limit);

	while(limit--)
	{
		int n,m,s,r_in_first_round,now_after_first_round,remain;
			printf("Enter n,m,s: ");
			scanf("%d%d%d",&n,&m,&s);


			r_in_first_round = (n-s) + 1;

			if (m < r_in_first_round)
				printf("%d",(s+m)-1);

			else
			{
				now_after_first_round = m - r_in_first_round;

				remain = now_after_first_round % n ;

				if (remain == 0)
					printf("%d",n);
				else
					printf("%d",remain);

			}

	}

	return EXIT_SUCCESS;
}
