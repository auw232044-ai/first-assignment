#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter a number: ");
    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;      
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
