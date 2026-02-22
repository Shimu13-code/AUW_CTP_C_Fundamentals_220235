#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("Age: ");
    int citizenship = get_int("Citizenship (1=Yes, 0=No): ");

    if (age >= 18)
    {
        if (citizenship == 1)
        {
            printf("Eligible to Vote\n");
        }
        else
        {
            printf("Not Eligible (Not Citizen)\n");
        }
    }
    else
    {
        printf("Not Eligible (Under Age)\n");
    }
}
