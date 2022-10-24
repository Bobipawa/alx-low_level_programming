#include "main.h"
/**
 *print_array - a function that prints n elements of an array of integers
 *@a: an array
 *@n:the length of the array
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar(a[i]);
}
_putchar('\n');
}
