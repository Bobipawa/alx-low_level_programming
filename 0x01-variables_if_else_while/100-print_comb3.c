#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 always
 */
int main(void)
{
int i = 0, j = 0;
for (i = 48; i <= 56; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
