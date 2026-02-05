#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter number: ");

    x++;
    printf("%i\n", x);

    x--;
    printf("%i\n", x);

    return 0;
}
