#include "main.h"

/**
 * _strncpy - Copies at most 'n' bytes from 'src' to 'dest'.
 * @dest: The destination buffer.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';

return ptr;
}
