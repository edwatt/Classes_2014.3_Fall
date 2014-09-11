#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	char mystring[100];
	int n = 10, r, i, picks=0, pick;

	printf("Input a number for your roullette pick: ");
	scanf("%d", &pick);

	while(1)
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
		printf("%d Spins\n", n);
		printf("%d's: %f (%d)\n", pick,((double)picks/n),picks);

		fgets (mystring , 100 , stdin);

		n = n * 10;
	}
	return 0;
}
