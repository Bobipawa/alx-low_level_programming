#include <stdio.h>
/**
 *main - Gives the card of change
 *@argc: int
 *@argv: string array
 *Return: the card of change
 */
int main(int argc, char *argv[])
{
int card = 0, rest = 0;
if (argc == 2)
{
rest = atoi(argv[i]);
if (rest < 0)
{
printf("0\n");
}
else
{
card += rest / 25;
rest = rest % 25;
card += rest / 10;
rest = rest % 10;
card += rest / 5;
rest = rest % 5;
card += rest / 2;
rest %= 2;
card += rest / 1;
rest %= 1;
}
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
