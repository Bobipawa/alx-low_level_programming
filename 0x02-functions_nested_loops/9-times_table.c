#include "main.h"
/**
 *times_table - Prints times tables from 0 to 9
 */
void times_table(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (j == 0 && i == 0)
{
_putchar('0');
continue;
}
_putchar(' ');
k = (n - n % 10) / 10;
if (k == 0)
_putchar(' ');
else
_putchar('0' + k);
_putchar('0' + n % 10);
if (j == 9)
break;
_putchar(',');
}
_putchar('\n');
}
}
