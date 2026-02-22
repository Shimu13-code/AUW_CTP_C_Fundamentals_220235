#include <cs50.h>
#include <stdio.h>

int is_even(int n);

int main(void)
{
    int num = get_int("Enter a number: ");

    if (is_even(num))
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
