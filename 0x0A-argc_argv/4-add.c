#include <stdio.h>
/**
 *main - Sums up two numbers
 *@argc: int
 *@argv: string array
 *Return: the sum
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
printf("0\n");
else
{
for (i = 1; i < argc; i++)
{
if (isdigit(argv[i]))
sum += argv[i];
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (sum);
}
