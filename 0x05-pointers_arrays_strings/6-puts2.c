#include "main.h"

/**
 * puts2 - prints every other string of a character
 * @str: function parameter
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	_putchar(str[i]);
	_putchar('\n');
}
