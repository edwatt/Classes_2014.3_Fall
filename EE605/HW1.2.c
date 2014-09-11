#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

	FILE *f = fopen("hw1.2_results.txt","w");
	if(f==NULL)
	{
		printf("Error opening file!\n");
		return(1);
	}


	srand(time(NULL));
	int n = 10, r, i, sixes=0;

	fprintf(f, "Die_Throws,Sixes\n");

	while(n <= 100000000)
	{
		sixes =0;
		for(i=0;i<n;i++)
		{

			r = rand() % 6;
			if(r == 5)
			{
				sixes++;
			}
		}
		fprintf(f, "%d,%d\n",n,sixes);


		n = n * 10;
	}

	fclose(f);

	return 0;
}
