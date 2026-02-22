#include <cs50.h>
#include <stdio.h>

int find_max(int a, int b);

int main(void)
{
    int n1 = get_int("Number 1: ");
    int n2 = get_int("Number 2: ");

    int max = find_max(n1, n2);
    printf("Max = %i\n", max);
}

int find_max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
