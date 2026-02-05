#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("a: "), b = get_int("b: ");

    printf("Sum: %d\nDiff: %d\nProd: %d\nQuot: %d\nRem: %d\n",
           a+b, a-b, a*b, a/b, a%b);

    return 0;
}
