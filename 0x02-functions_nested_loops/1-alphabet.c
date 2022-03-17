#include "main.h"
/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 *
 * You can only use _putchar twice in your code
 *
 * Return : nothing
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);

	}
	_putchar('\n');
}
