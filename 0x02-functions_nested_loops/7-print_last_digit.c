#include "main.h"
/**
 *print_last_digit - Gives the unit digit of an integer
 *@n: an integer
 *Return: an integer
 */
int print_last_digit(int n)
{
_putchar('0' + n % 10);
return (n % 10);
}
