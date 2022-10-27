#include "main.h"
/**
 * *_strncat - Concatenates two strings
 *@dest: a string
 *@src: a string
 *@n: an integer
 *Return: a pointer on dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, k = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[k] != '\0' && k < n)
{
dest[i + k] = src[k];
k++;
}
dest[i + k] = '\0';
return (dest);
}
