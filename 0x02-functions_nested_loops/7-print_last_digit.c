#include "main.h"
/**
 *print_last_digit - Gives the unit digit of an integer
 *@n: an integer
 *Return: an integer
 */
int print_last_digit(int n)
{
int k = n % 10;
if (k < 0)
k = -k;
 _putchar('0' + k);
return (k);
}
