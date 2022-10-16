#include <stdio.h>
/**
 *main -Entry point
 *
 *Return: 0 always
 */
int main(void)
{
for (int i = 0; i <= 9; i++)
{
putchar('0' + i);
i++;
}
putchar('\n');
return (0);
}
