#include "main.h"

/**
 * _strncat - concatène deux chaînes de caractères
 * en utilisant au plus n octets de src
 * @dest: chaîne de destination
 * @src: chaîne source
 * @n: nombre maximal de caractères à ajouter
 *
 * Return: pointeur vers la chaîne résultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;


while (dest[i] != '\0')
{
i++;
}


while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
