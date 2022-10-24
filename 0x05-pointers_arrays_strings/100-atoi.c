#include "main.h"
/**
 *_atoi - a function that convert a string to an integer
 *@s: a string
 *Return: an integer
 */
int _atoi(char *s)
{
  int i, nb = 0, signe = 1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 48 && s[i] <= 57)
nb = nb * 10 + s[i] - '0';
else if (s[i] == '-')
signe = -1;
else if (s[i] == '+')
signe = 1;
else
break;
}
return (signe * nb);
}
