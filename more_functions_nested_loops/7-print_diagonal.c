#include "main.h"

/**
 * print_diagonal - dessine une diagonale dans le terminal
 * @n: nombre de lignes de la diagonale
 *
 * Return: rien
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
