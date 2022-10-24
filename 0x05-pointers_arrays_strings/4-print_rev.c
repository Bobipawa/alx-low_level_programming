/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: a string
 */
void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
}
i--;
while (i >= 0)
{
_putchar(s[i]);
i--;
} 
_putchar('\n');
}
