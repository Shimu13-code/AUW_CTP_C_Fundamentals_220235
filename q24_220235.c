#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Size: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
