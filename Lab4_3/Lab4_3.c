// Lab4_3.c: Обрахунок у вкладених  циклах//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int f;
int main (void)
{
	unsigned int n;
	int x;
	setlocale(LC_CTYPE, "ukr");

	printf("\n Введiть натуральне число N="); scanf("%d", &n);
	printf("\n Введiть цiле число х="); scanf("%d", &x);

		for (int i = 1; i <= n; i++)
		{
			for (int j = 2; j <= n; j++) f += (x + i + j);
		}

	printf("\n Для заданих значень N= %d та x= %d \n Отриманий результат сумування: %d", n, x, f);
	
	int getch(); getch();
	return 0;
}