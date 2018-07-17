//---------------------------------
// Question 3.
// purpose: the purpose of this program is to generate a random integer between0-3,and use the //number to display one of the phrases. The program will then stop when the phrase sleep is read.
//----------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int a, b;

int main()
{
	char Fortune[4][12] = { "Study more","Go to movie","Relax","Sleep" };

	int i;
	int c = 1;
	int num = 0;
	srand(time(NULL));

	while (c != 0)
	{
		num = (rand() % 4) + 1;

		for (i = 0; i < num; i++)
		{
			if (i == 3)
			{
				printf(" %s \n", Fortune[i]);
				printf("OK \n");
				c = 0;
				break;
			}

			printf(" %s \n", Fortune[i]);

		}
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}
