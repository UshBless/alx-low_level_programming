#include "main.h"

/**
 * _strncpy - function that copies a strings
 * @dest: destination string
 * @src: the source string
 * @n: number of bytes to be used
 * Return: the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int count_of_bytes;

for (count_of_bytes = 0; count_of_bytes < n && src[count_of_bytes] != '\0')
{
count_of_bytes++;
}
dest[count_of_bytes] = src[i];

for (; count_of_bytes < n ; count_of_bytes++)
dest[count_of_bytes] = '\0';

return (dest);
}
