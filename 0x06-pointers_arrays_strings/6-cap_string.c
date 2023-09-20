#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if it's a separator, 0 otherwise.
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";

for (int i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (1);
}

return (0);
}

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *)
{
int capitalize_next = 1; // Capitalize the next character

for (int i = 0; str[i] != '\0'; i++)
{
if (is_separator(str[i]))
{
capitalize_next = 1;
}
else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32; // Convert to uppercase
capitalize_next = 0;
}
else
{
capitalize_next = 0;
}
}

return str;
}

