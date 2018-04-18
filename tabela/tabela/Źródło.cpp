#include <stdio.h>
#include <cmath>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <cstdio>
#include <fstream>
#include <iostream>

using namespace std;

float x[10] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1 };

void poczatek_tabeli()
{
	printf("%c", 201);
	for (int i = 0; i < 10; i++)
	{
		printf("%c", 205);
	 }

	for (int i = 0; i < 10; i++)
	{
			printf("%c", 203);
			for(int j=0; j <9; j++)
			{
				printf("%c", 205);
			}
	}
	printf("%c\n", 187);
}
void linie()
{
	printf("%c", 204);
	for (int i = 0; i < 10; i ++ )
	{
		printf("%c", 205);
	}
	for (int i= 0; i < 10; i++)
	{
		printf("%c", 206);
		for (int j = 0; j < 9; j++)
		{
			printf("%c", 205);
		}
	}
	printf("%c\n", 185);
}

void koniec_lini()
{
	printf("%c", 200);
	for (int i = 0; i < 10;i++)
	{
		printf("%c", 205);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%c", 202);
		for (int j = 0; j < 9; j++)
		{
			printf("%c", 205);
		}
	}
	printf("%c", 188);
}

void wartosci()
{
	printf("%c", 186);
	printf(" warto%c%c x",152 ,134);
	printf("%c", 186);	 
	for (int i = 0; i < 10; i++)
	{

		printf("   %.1f   ",x[i]);
		printf("%c", 186);
	}
	printf("\n");
}

void funkcja_sinus()
{
	printf("%c", 186);
	printf("  sin(x)  ");
	printf("%c", 186);
	for (int i = 0; i < 10; i++)
	{
		printf(" %f",sin(x[i]));
		printf("%c", 186);
		
	}
	printf("\n");
}

void funkcja_cosinus()
{
	printf("%c", 186);
	printf("  cos(x)  ");
	printf("%c", 186);
	for (int i = 0; i < 10; i++)
	{
		printf(" %f", cos(x[i]));
		printf("%c", 186);
	}
	printf("\n");
}

void funkcja_tanges()
{
	printf("%c", 186);
	printf("   tg(x)  ");
	printf("%c", 186);
	for (int i = 0; i < 10; i++)
	{
		printf(" %f", tan(x[i]));
		printf("%c", 186);
	}
	printf("\n");
}

void funkcja_cotanges()
{
	printf("%c", 186);
	printf("  ctg(x)  ");
	printf("%c", 186);
	for (int i = 0; i < 10; i++)
	{
		printf(" %f", 1/tan(x[i]));
		printf("%c", 186);
	}
	printf("\n");
}

void funkcja_arcsin()
{
	printf("%c", 186);
	printf(" arcsin(x)");
	printf("%c", 186);
	for (int i = 0; i < 10; i++)
	{
		printf(" %f", asin(x[i]));
		printf("%c", 186);
	}
	printf("\n");
}

void funkcja_arccos()
{
	printf("%c", 186);
	printf(" arccos(x)");
	printf("%c", 186);
	for (int i = 0; i < 10; i++)
	{
		printf(" %f", acos(x[i]));
		printf("%c", 186);
	}
	printf("\n");
}

void funkcja_arctg()
{
	printf("%c", 186);
	printf(" arctg(x) ");
	printf("%c", 186);
	for (int i = 0; i < 10; i++)
	{
		printf(" %f", atan(x[i]));
		printf("%c", 186);
	}
	printf("\n");
}

void funkcja_arcctg()
{
	printf("%c", 186);
	printf(" arctg(x) ");
	printf("%c", 186);
	for (int i = 0; i < 10; i++)
	{
		printf(" %f", atan(1/x[i]));
		printf("%c", 186);
	}
	printf("\n");
}

void funkcja_log()
{
	printf("%c", 186);
	printf("  log(x)  ");
	printf("%c", 186);
	for (int i = 0; i < 9; i++)
	{
		printf("%f", log10(x[i]));
		printf("%c", 186);
	}
	printf(" %f", log10(x[9]));
	printf("%c", 186);
	printf("\n");
}

void funkcja_ln()
{
	printf("%c", 186);
	printf("  ln(x)   ");
	printf("%c", 186);
	for (int i = 0; i < 9; i++)
	{
		printf("%f", log(x[i]));
		printf("%c", 186);
	}
	printf(" %f", log(x[9]));
	printf("%c", 186);
	printf("\n");
}

int main()
{
	poczatek_tabeli();
	_getch();

	wartosci();
	_getch();

	linie();
	_getch();

	funkcja_sinus();
	_getch();

	linie();
	_getch();

	funkcja_cosinus();
	_getch();

	linie();
	_getch();

	funkcja_tanges();
	_getch();

	linie();
	_getch();

	funkcja_cotanges();
	_getch();

	linie();
	_getch();

	funkcja_arcsin();
	_getch();

	linie();
	_getch();

	funkcja_arccos();
	_getch();

	linie();
	_getch();

	funkcja_arctg();
	_getch();

	linie();
	_getch();

	funkcja_arcctg();
	_getch();

	linie();
	_getch();

	funkcja_log();
	_getch();

	linie();
	_getch();

	funkcja_ln();
	_getch();

	koniec_lini();
	_getch();

	return 0;
}