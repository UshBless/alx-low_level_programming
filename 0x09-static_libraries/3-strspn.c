#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - Ptints the Alphabet
 * @s: input
 * @accept: input
 * Return: zero
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
