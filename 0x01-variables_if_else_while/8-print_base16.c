#include <stdio.h>
/**
 *main -Entry point
 *
 *Return: 0 always
 */
int main(void)
{
char digit = '0';
while (digit <= '9')
{
putchar(digit);
digit++;
}
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}
