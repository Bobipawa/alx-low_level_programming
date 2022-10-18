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
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
w = i * j;
if (j == 0)
{
_putchar('0');
_putchar(',');
continue;
}
k = (w - w % 100) / 100;
_putchar(' ');
if (k == 0)
_putchar(' ');
else
_putchar('0' + k);
k = (w % 100 - (w % 100) % 10) / 10;
_putchar('0' + k);
_putchar('0' + w % 10);
if (j == n)
break;
_putchar(',');
}
_putchar('\n');
}
}
}
