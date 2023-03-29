#include "main.h"

/**
 * _strcpy - Function that copies string
 * @dest: destination array
 * @src: source array
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
