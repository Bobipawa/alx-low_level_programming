#include "main.h"
/**
 * *_memset - a function
 *@s: a string
 *@c: a char
 *@n: an int
 *Return: a pointer on s
 */
char *_memset(char *s, char c, int n)
{
int w = 0, i = 0;
while (i < n)
{
if (s[i] == '\0')
w = 1;
s[i] = c;
i++;
}
if (w == 1)
s[i] = '\0';
return (s);
}
