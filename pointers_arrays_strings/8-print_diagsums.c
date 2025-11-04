#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - affiche les sommes des deux diagonales d'une matrice carrée
 * @a: pointeur vers la matrice d'entiers (traitée comme un tableau 1D)
 * @size: dimension de la matrice (nombre de lignes/colonnes)
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}

printf("%d, %d\n", sum1, sum2);
}
