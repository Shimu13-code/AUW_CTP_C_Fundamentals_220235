#include <cs50.h>
#include <stdio.h>

int add_numbers(int a, int b);

int main(void)
{
    int x = get_int("Enter first number: ");
    int y = get_int("Enter second number: ");

    int sum = add_numbers(x, y);
    printf("Sum = %i\n", sum);
}

int add_numbers(int a, int b)
{
    return a + b;
}
