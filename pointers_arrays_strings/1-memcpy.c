#include "main.h"

/**
 * _memcpy - copie n octets de src vers dest
 * @dest: pointeur de destination
 * @src: pointeur source
 * @n: nombre d'octets à copier
 *
 * Return: pointeur vers dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
