#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Array Elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}
