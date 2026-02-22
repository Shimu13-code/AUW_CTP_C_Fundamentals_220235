#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");

    if (a > b)
    {
        printf("a is larger\n");
    }
    else if (b > a)
    {
        printf("b is larger\n");
    }
    else
    {
        printf("Both are equal\n");
    }
}
