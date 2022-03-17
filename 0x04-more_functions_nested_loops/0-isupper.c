#include "main.h"
/**
 * _isupper - checks for uppercase.
 * @c: character to check.
 * Return: 1 if c is uppercase, otherwise return 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
