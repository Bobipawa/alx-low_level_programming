#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
int cpt = 0, i = 0;
while (cpt < 10)
{
cpt++;
for (i = 0; i <= 25; i++)
{
putchar('a'+i);
}
putchar('\n');
}
}
