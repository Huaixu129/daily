#include <stdio.h>
int factorial(int x)
{
    if (x == 1)
        return 1;
    return x * factorial(x - 1);
}
void toBinary(unsigned long n)
{
    int r;
    r = n % 2;
    if (n >= 2)
        toBinary(n / 2);
    putchar(r == 0 ? '0' : '1');
}
int main()
{
    // printf("%d", factorial(3));
    toBinary(4);
    return 0;
}