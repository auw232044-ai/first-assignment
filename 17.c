#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter n: ");
    int mult = 1;
    for (int i = 1; i <= n; i++)
    {
        mult = mult*i;
    }
    printf("%d\n",mult);
    return 0;
}             
