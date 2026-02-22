#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char word[20];

    string input = get_string("Enter a word: ");

    printf("Word = %s\n", input);
}
