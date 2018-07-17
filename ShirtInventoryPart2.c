//---------------------------------
// Question 2.
// purpose: the purpose of this program is to print out the total inventory, blue, large, short sleeve, 
//small\green, green\short sleeve shirts from the inventory array. Each print out will consist of its own 
//function.
//----------------------------------
#include <stdio.h>
#include <stdlib.h>

void tAll(int t[][4][2]);
void tBlue(int t[][4][2]);
void tLarge(int t[][4][2]);
void tShortS(int t[][4][2]);
void tSmallGreen(int t[][4][2]);
void tGreenShort(int t[][4][2]);

int a, b, c, i, j, k;

int main()
{
	int t[3][4][2] = { 2,2,2,2, 3,3,3,3, 4,4,4,4,
					5,5,5,5, 6,6,6,6, 7,7,7,7 };

	tAll(t);
	tBlue(t);
	tLarge(t);
	tShortS(t);
	tSmallGreen(t);
	tGreenShort(t);

	printf("\n\n");
	system("PAUSE");
	return 0;
}

void tAll(int t[][4][2])
{
	int tinventory = 0;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 4; b++)
		{
			for (c = 0; c < 2; c++)
			{
				tinventory += t[a][b][c];
			}

		}
	}
	printf("Total INVENTORY of all shirts: %d \n", tinventory);
}
void tBlue(int t[][4][2])
{
	int totalblue = 0;

	for (i = 2; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 2; k++)
			{
				totalblue += t[i][j][k];

			}
		}
	}
	printf("Total of all BLUE shirts: %d \n", totalblue);
}
void tLarge(int t[][4][2])
{
	int totallarge = 0;

	for (i = 2; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 2; k++)
			{
				totallarge += t[j][i][k];
			}
		}
	}
	printf("Total of all LARGE shirts: %d \n", totallarge);
}
void tShortS(int t[][4][2])
{
	int totalshort = 0;

	for (k = 0; k < 1; k++)
	{
		for (j = 0; j < 3; j++)
		{
			for (i = 0; i < 4; i++)
			{
				totalshort += t[j][i][k];
			}
		}
	}
	printf("Total of all SHORT SLEEVES shirts: %d \n", totalshort);
}
void tSmallGreen(int t[][4][2])
{
	int totalSG = 0;
	for (k = 0; k < 2; k++)
	{
		for (j = 1; j < 2; j++)
		{
			for (i = 0; i < 1; i++)
			{
				totalSG += t[j][i][k];
			}
		}
	}
	printf("Total of all SMALL and GREEN shirts: %d \n", totalSG);
}

void tGreenShort(int t[][4][2])
{
	int totalGS = 0;

	for (k = 0; k < 1; k++)
	{
		for (j = 1; j < 2; j++)
		{
			for (i = 0; i < 4; i++)
			{
				totalGS += t[j][i][k];
			}
		}
	}
	printf("Total of all GREEN and SHORT SLEEVES shirts: %d \n", totalGS);

}
