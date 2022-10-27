#include "main.h"
/**
 * *_strncpy - Copies a string into another
 *@dest: a string
 *@src: a string
 *@n: an integer
 *Return: a pointer on dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
