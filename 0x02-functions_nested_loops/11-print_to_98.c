#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - lists integers from n to 98
 *@n: first integer
 */
void print_to_98(int n)
{
int i = 0;
if (n < 98)
{
while (n + i <= 97)
{
printf("%d, ", n + i);
i++;
}
}
else if  (n > 98)
{
while (n - i >= 99)
{
printf("%d, ", n - i);
i++;
}
}
printf("98\n");
}
