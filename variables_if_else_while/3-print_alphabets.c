#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /* Alphabet en minuscule */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    /* Alphabet en majuscule */
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return (0);
}
