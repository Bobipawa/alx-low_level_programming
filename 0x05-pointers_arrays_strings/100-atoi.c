#include "main.h"
/**
 *_atoi - a function that convert a string to an integer
 *@s: a string
 *Return: an integer
 */
int _atoi(char *s)
{
int i, nb = 0;
for (i = 0; s[i] != '\0'; i++)
{
nb = nb * 10 + s[i] - '0';
}
return (nb);
}
