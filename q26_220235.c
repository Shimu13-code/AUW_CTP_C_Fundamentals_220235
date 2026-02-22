#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");

    if (n > 0)
    {
        printf("Positive\n");
    }
    else if (n < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}
