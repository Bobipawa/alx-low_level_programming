#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - lists integers from n to 98
 *@n: first integer
 */
void print_to_98(int n)
{
int i = 1;
printf("%d,", n);
while (n + i <= 97)
{
printf(" %d,", n + i);
}
printf(" 98\n");
}
