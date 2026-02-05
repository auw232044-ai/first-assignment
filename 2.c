#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float c = get_float("Celsius: ");

    float f = (c * 9 / 5) + 32;

    printf("Fahrenheit: %.2f\n", f);

    return 0;
}
