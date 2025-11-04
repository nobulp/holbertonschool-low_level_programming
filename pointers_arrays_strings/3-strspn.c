#include "main.h"

/**
 * _strspn - calcule la longueur du préfixe d'accept dans s
 * @s: chaîne principale
 * @accept: caractères autorisés
 *
 * Return: longueur du segment initial
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
int found;

for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
found = 1;
break;
}
}
if (!found)
return (count);
}

return (count);
}
