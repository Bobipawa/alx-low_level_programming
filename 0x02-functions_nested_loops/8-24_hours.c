#include "main.h"
/**
 *jack_bauer - Prints time
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
_putchar('0' + (i - i % 10) / 10);
_putchar('0' + print_last_digit(i));
_putchar(':');
_putchar('0' + (j - j % 10) / 10);
_putchar('0' + print_last_digit(i));
}
}
}
