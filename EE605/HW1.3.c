#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int n = 10, r, i, picks=0, pick;

	printf("Input a number for your roullette pick: ");
	scanf("%d", &pick);

	FILE *f = fopen("hw1.3_results.txt","w");
	if(f==NULL)
	{
		printf("Error opening file!\n");
		return(1);
	}

	fprintf(f,"Spins,Successes\n");

	while(n <= 100000000)
	{
		picks =0;
		for(i=0;i<n;i++)
		{

			r = rand() % 36;
			if(r == pick)
			{
				picks++;
			}
		}
		
		fprintf(f, "%d,%d\n", n,picks);

		n = n * 10;
	}

	fclose(f);	

	return 0;
}
