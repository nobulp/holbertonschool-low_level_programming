#include "main.h"

/**
 * _memset - remplit la mémoire avec une constante
 * @s: pointeur vers la zone mémoire à remplir
 * @b: la valeur (byte) à copier
 * @n: nombre d’octets à remplir
 *
 * Return: pointeur vers la mémoire remplie (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
