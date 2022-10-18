#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int i;
for (i = 0; i <= 25; i++)
{
putchar('0'+i);
}
putchar('\n');
}
