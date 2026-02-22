#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string names[3];

    for (int i = 0; i < 3; i++)
    {
        names[i] = get_string("Enter name %i: ", i + 1);
    }

    printf("Names:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }
}
