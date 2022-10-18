#include "main.h"
/**
 *print_times_table - Prints times tables from 0 to 9
 *@n: an integer
 */
void print_times_table(int n)
{
if (n <= 15 && n > 0)
{
int i, j, k, w;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
w = i * j;
if (j == 0)
{
_putchar('0');
_putchar(',');
continue;
}
_putchar(' ');
k = (w - w % 10) / 10;
if (k == 0)
_putchar(' ');
else
_putchar('0' + k);
_putchar('0' + w % 10);
if (j == 9)
break;
_putchar(',');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
