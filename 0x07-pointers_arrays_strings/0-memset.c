#include "main.h"
/**
 * *_memset - a function
 *@s: a string
 *@b: a char
 *@n: an int
 *Return: a pointer on s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
 return (s);
}
