#include 'main.h';

#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase character. another cases, shows 0
 * Check on the lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
