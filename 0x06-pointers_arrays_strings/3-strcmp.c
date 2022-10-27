#include "main.h"
/**
 *_strcmp - Compares two strings
 *@s1: string 1
 *@s2: string 2
 *Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (1)
{
if (s1[i] == '\0' && s2[i] == '\0')
return (0);
else if (s1 == '\0' && s2 != '\0')
return (-15);
else if (s1 != '\0' && s2 == '\0')
return (15);
i++;
}
}
