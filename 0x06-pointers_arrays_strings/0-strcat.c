#include "main.h"
/**
 * *_strcat - Concatenates two strings
 *@dest: a string
 *@src: string
 *Return: A pointer on desr
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
while (dest[i] != '\0')
{
i++;
}
int k = 0;
while (src[k] != '\0')
{
dest[i + k] = src[k];
k++;
}
dest[i + k] = '\0';
return (dest);
}
