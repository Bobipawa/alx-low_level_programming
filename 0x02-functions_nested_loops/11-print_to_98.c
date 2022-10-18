#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - lists integers from n to 98
 *@n: first integer
 */
void print_to_98(int n)
{
int i = 0;
while (n + i <= 97)
{
printf("%d, ", n + i);
i++;
}
printf("98\n");
}
