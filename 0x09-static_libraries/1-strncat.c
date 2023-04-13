#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - Print the Alphabet
 * @dest: input
 * @src: input
 * @n: input
 * Return: zero
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
