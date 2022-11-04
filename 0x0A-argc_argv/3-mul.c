#include <stdio.h>
/**
 *main - multiplies two numbers
 *@argc: int
 *@argv: string array
 *Return: the result
 */
int main(int argc, char *argv[])
{
if (argc == 3)
printf("%d", atoi(argv[1]) * atoi(argv[2]));
else
printf("Error");
}
