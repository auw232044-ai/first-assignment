#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter n: ");
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
