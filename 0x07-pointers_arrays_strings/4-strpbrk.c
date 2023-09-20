#include "main.h"
/**
*_strpbrk - locates the first occurrence of any byte in accept
*@s: the string to search
*@accept: the string containing bytes to search for
*
*Return: a pointer to the byte in `s`
*that matches one of the bytes in `accept`,
*or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
s++;
}
return (0);
}
