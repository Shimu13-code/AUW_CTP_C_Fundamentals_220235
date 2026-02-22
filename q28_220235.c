#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");

    if (n >= 1 && n <= 100)
    {
        printf("In range 1-100\n");
    }
    else
    {
        printf("Out of range\n");
    }
}
