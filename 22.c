#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter n: ");
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (2*i - 1);
    }

    printf("%d\n", sum);
}
