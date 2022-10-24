#include "main.h"
/**
 * *_strcopy - a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: a string
 *@src: a string
 *Return: a pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
int i, length;
for (length = 0; src[length] != '\0'; length++)
{
}
for (i = 0; i <= length ; i++)
{
dest[i] = src[i];
}
return (dest);
}
