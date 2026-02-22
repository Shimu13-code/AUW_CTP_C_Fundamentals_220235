#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float val = get_float("Enter float: ");
    printf("Formatted: %.2f\n", val);
}
