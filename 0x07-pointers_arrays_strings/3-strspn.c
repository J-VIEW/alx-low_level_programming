#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search within
 * @accept: the string containing characters to search for
 *
 * Return: the number of bytes in the initial segment of `s`
 * which consist only of bytes from `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;

while (*s)
{
	for (found = 0; accept[found]; found++)
	{
		if (*s == accept[found])
		{
			count++;
			break;
		}
		else if (accept[found + 1] == '\0')
			return (count);
	}
	s++;
}
return (count);
}
