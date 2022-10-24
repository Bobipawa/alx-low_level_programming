/**
 *_puts - Prints a string
 *@s: a string
 */
void _puts(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
putchar('\n');
}
