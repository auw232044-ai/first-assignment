#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter n: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", 3 * i);     
    }

    return 0;
}
