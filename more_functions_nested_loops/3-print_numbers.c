#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9
 *
 * Return: Rien
 */
void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
