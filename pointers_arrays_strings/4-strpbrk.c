#include "main.h"

/**
 * _strpbrk - recherche le premier caractère commun entre s et accept
 * @s: chaîne à analyser
 * @accept: ensemble de caractères
 *
 * Return: pointeur vers le premier caractère trouvé, ou NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (s + i);
}
}
return (0);
}
