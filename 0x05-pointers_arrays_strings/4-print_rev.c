#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (s[start--])
		_putchar(s[start]);
	_putchar('\n');
}
