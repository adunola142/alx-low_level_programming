#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 *
 * Return: The last digit
 */
int print_last_digit(int id)
{
	if (id > 0)
	{
		id = id % 10;
		_putchar(id + '0');
	}
	else
	{
		id = id % 10 * -1;
		_putchar(id + '0');
	}
	return (id);
}
