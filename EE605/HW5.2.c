#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	
    FILE *f = fopen("hw4.2_results.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return(1);
    }

	srand(time(NULL));
	int n = 500, trial_cnt = 0, trials = 10000;
	
	while(trial_cnt < trials)
	{
		int i,r;
		double sum = 0.0;
		for(i=0;i<n;i++)
		{
			sum += ((double) rand() / (RAND_MAX));
		}

		fprintf(f,"%f\n", sum);
		
		trial_cnt++;
	}

	fclose(f);

	return 0;
}
