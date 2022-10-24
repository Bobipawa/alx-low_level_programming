#include "main.h"
/**
 *puts_half -  a function that prints half of a string, followed by a new line
 *@str: a string
 */
void puts_half(char *str)
{
int i, l;
for (l = 0; str[l] != '\0'; l++)
{
}
for (i = (l - 1) / 2 + 1; i < l; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
