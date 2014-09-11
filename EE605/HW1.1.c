#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	
	FILE *f = fopen("hw1.1_results.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return(1);
    }

	srand(time(NULL));
	int n = 10, r, i, heads=0, tails=0;
	
	fprintf(f,"Tosses,Heads,Tails\n");

	while(n <= 100000000)
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
		//printf("%d Coin Tosses\n", n);
		//printf("Heads: %f (%d)\n", ((double)heads/n),heads);
		//printf("Tails: %f (%d)\n", ((double)tails/n),tails);


		fprintf(f,"%d,%d,%d\n", n,heads,tails);

		n = n * 10;
	}

	fclose(f);

	return 0;
}
