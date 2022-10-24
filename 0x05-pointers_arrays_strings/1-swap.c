/**
 *swap_int - Swaps he values of two integers using pointers
 *@a: a pointer on an integer
 *@b: a pointer on an integer
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
