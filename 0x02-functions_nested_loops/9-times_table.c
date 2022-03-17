#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 * Return: Nothing.
 */

void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;

			if (res <= 9)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
			else 
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',')
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
