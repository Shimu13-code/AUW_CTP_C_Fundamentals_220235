#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float temp = get_float("Enter temperature: ");

    if (temp < 20)
    {
        printf("Cold\n");
    }
    else if (temp <= 30)
    {
        printf("Warm\n");
    }
    else
    {
        printf("Hot\n");
    }
}
