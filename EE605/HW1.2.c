#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	char mystring[100];
	int n = 10, r, i, sixes=0;
	while(1)
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
		printf("%d Die Throws\n", n);
		printf("Sixes: %f (%d)\n", ((double)sixes/n),sixes);

		fgets (mystring , 100 , stdin);

		n = n * 10;
	}
	return 0;
}
