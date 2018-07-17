//---------------------------------
// Mohammed Hassnain
// cpsc 223c
// Sept 22, 2015
// Project No.4
// Question 1.
// purpose: the purpose of this program is to print out the number of sizes and colors of tee shirts in //inventory in array. The sum of the all the total , red, large shirt will then be printed.
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int rAll(int t[][4]);
int fAll(int t[][4], int n);
int lAll(int t[][4]);

void Display(TotalAll, TotalRed, TotalLarge);
enum SIZE { S, M, L, XL };
enum COLOR { RED, BLACK, BLUE, GREEN };

int i, j, k, l;

int main()
{

	int TotalAll = 0;
	int TotalRed = 0;
	int TotalLarge = 0;

	int t[4][4] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7 };

	int *p = t;
	/********DISPLAY ARRAY******************/

	printf("\tThis is our inventory \n");
	/*
		  for(SIZE s=S; s<=XL; s=(SIZE)(s+1))
		  {
			  printf("%d \t", t[s]);
		  }
	*/
	printf("\n");
	printf("\tS\tM\tL\tXL\t\n\n");



	for (i = 0; i < 4; i++)
	{
		if (i == 0)
			printf("RED\t");
		else if (i == 1)
			printf("BLACK\t");
		else if (i == 2)
			printf("BLUE\t");
		else if (i == 3)
			printf("GREEN\t");

		for (j = 0; j < 4; j++)
		{
			printf("%d\t", *p++);
		}

		printf("\n");
	}
	/*****************************************/
	printf("\n\n");

	TotalAll = fAll(t, 4);
	TotalRed = rAll(t);
	TotalLarge = lAll(t);

	Display(TotalAll, TotalRed, TotalLarge);

	printf("\n\n");
	system("PAUSE");
	return 0;
}

int fAll(int x[][4], int n)
{
	int total = 0;
	/*
			for(k=0; k<4; k++)
		 {
			 for(l=0; l<4; l++)
			 {
			   total+= t[k][l];
			 }
		 }
		 */

	enum COLOR c;
	enum SIZE s;
	for (c = RED; c <= GREEN; c = (c + 1))
	{
		for (s = S; s <= XL; s = (s + 1))
		{
			total += x[c][s];
		}
	}

	return total;
}
int rAll(int t[][4])
{
	int rtotal = 0;

	for (k = 0; k < 1; k++)
	{
		for (l = 0; l < 4; l++)
		{
			rtotal += t[k][l];
		}
	}
	return rtotal;
}
int lAll(int t[][4])
{
	int ltotal = 0;

	for (l = 2; l < 3; l++)
	{
		for (k = 0; k < 4; k++)
		{
			ltotal += t[k][l];
		}
	}
	return ltotal;

}
void Display(TotalAll, TotalRed, TotalLarge)
{
	printf("Total of all shirts: %d\n", TotalAll);
	printf("Total of red colors: %d\n", TotalRed);
	printf("Total of large size: %d\n", TotalLarge);
	printf("\n");
}
