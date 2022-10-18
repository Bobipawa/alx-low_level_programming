#include <stdio.h>
/**
 *main - Entry point
 *Return: 0 always
 */
int main()
{
print_alphabet_x10();
return (0);
}
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
