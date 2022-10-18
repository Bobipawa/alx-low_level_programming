#include "main.h"
/**
 *_isalpha - Tests whether a character is alphabetic or not
 *@c: char type
 *Return: 1 if it is and 0 otherwise
 */
int _isalpha(char c)
{
if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
return (1);
else
return (0);
}
