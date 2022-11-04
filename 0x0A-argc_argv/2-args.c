#include <stdio.h>
/**
 *main - prints all arguments
 *@argc: an int
 *@argv: a string array
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
