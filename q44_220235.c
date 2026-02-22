#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int arr[5];
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Number: ");

        if (arr[i] > 0)
        {
            count++;
        }
    }

    printf("Positive Numbers Count = %i\n", count);
}
