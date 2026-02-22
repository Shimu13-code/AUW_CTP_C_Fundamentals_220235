#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int mark = get_int("Enter mark: ");

    if (mark < 0 || mark > 100)
    {
        printf("Invalid Mark\n");
    }
    else if (mark >= 80)
    {
        printf("Grade A\n");
    }
    else if (mark >= 70)
    {
        printf("Grade B\n");
    }
    else if (mark >= 60)
    {
        printf("Grade C\n");
    }
    else if (mark >= 50)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }
}
