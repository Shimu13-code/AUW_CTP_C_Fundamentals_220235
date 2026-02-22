#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Number: ");
        sum += arr[i];
    }

    printf("Sum = %i\n", sum);
}
