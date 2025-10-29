#include "main.h"

/**
 * _strcat - concatène deux chaînes de caractères
 * @dest: chaîne de destination
 * @src: chaîne source
 *
 * Return: pointeur vers la chaîne résultante dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;


while (dest[i] != '\0')
{
i++;
}


while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
