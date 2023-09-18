#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

/* Copy each character from src to dest until the null terminator is reached */
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

/* Add the null terminator to the end of the copied string */
dest[i] = '\0';

return (dest);
}
