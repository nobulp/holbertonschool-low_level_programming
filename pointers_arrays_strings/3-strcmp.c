#include "main.h"

/**
 * _strcmp - compare deux chaînes de caractères
 * @s1: première chaîne
 * @s2: deuxième chaîne
 *
 * Return: un entier :
 *         0 si s1 == s2
 *         négatif si s1 < s2
 *         positif si s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}

return (s1[i] - s2[i]);
}
