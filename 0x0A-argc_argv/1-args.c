#include <stdio.h>
/**
 *main - Prints the number of arguments
 *@argc: an int
 *@argv: a string array
 *Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
