#include "main.h"

/**
 * _strncpy - copie une chaîne de caractères
 * @dest: chaîne de destination
 * @src: chaîne source
 * @n: nombre maximal de caractères à copier
 *
 * Return: pointeur vers la chaîne résultante dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}


while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
