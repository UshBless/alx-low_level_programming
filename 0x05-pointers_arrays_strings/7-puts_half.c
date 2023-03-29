#include "main.h"

/**
 * puts_half - prints half a string
 * @str: function parameter
 * Return: 0
 */

void puts_half(char *str)
{
	int i, length = 0, half;
	char *s = str;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	half = (length + 1) / 2;

	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
