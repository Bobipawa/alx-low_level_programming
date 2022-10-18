#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 */
void print_alphabet(void)
{
int i;
for (i = 0; i <= 25; i++)
{
putchar('a' + i);
}
putchar('\n');
}
