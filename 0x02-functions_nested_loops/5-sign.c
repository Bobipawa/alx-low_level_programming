#include "main.h"
/**
 *print_sign - Returns the sign of an integer
 *@n: an integer
 *Return: 1 if n is positive, 0 if it zero and -1 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
