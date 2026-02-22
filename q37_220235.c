#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Enter value for index %i: ", i);
    }

    printf("You Entered: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}
