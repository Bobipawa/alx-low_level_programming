#include "main.h"
/**
 *_strlen - Returns the length of a string
 *@s: a string
 *Return: the length of the string as an integer
 */
int _strlen(char *s)
{
int i, l = 0;
for (i = 0; s[i] != '\0'; i++)
{
l++;
}
return (l);
}
