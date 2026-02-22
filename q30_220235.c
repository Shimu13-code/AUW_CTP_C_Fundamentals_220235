#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = get_int("c: ");

    if (a >= b && a >= c)
    {
        if (a == b && a == c)
        {
            printf("All three are equal\n");
        }
        else
        {
            printf("Largest is %i\n", a);
        }
    }
    else if (b >= a && b >= c)
    {
        printf("Largest is %i\n", b);
    }
    else
    {
        printf("Largest is %i\n", c);
    }
}
