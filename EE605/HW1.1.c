#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	char mystring[100];
	int n = 10, r, i, heads=0, tails=0;
	while(1)
	{
		heads =0;
		tails = 0;
		for(i=0;i<n;i++)
		{

			r = rand() % 2;
			if(r == 0)
			{
				tails++;
			}
			else if(r == 1)
			{
				heads++;
			}
			else
			{
				printf("Fatal error\n");
			}
		}
		printf("%d Coin Tosses\n", n);
		printf("Heads: %f (%d)\n", ((double)heads/n),heads);
		printf("Tails: %f (%d)\n", ((double)tails/n),tails);

		fgets (mystring , 100 , stdin);

		n = n * 10;
	}
	return 0;
}
