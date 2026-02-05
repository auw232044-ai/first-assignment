#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int age = get_int("Enter age: ");

    if (age < 12)
    {
        printf("Ticket price: 50\n");
    }
    else if (age >= 12 && age <= 60)
    {
        if (get_int("Are you a student? (1 = yes, 0 = no): ") == 1)
        {
            printf("Ticket price: 80\n");
        }
        else
        {
            printf("Ticket price: 100\n");
        }
    }
    else
    {
        printf("Ticket price: 60\n");
    }

    return 0;
}


