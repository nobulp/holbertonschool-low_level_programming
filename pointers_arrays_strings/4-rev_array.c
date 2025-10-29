#include "main.h"

/**
 * reverse_array - inverse le contenu d’un tableau d’entiers
 * @a: tableau d'entiers
 * @n: nombre d’éléments du tableau
 *
 * Return: rien (void)
 */
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
