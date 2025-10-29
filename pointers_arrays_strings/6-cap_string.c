#include "main.h"

/**
 * cap_string - met une majuscule au début de chaque mot d'une chaîne
 * @str: la chaîne à modifier
 *
 * Return: pointeur vers la chaîne modifiée
 */
char *cap_string(char *str)
{
int i = 0, j;
char sep[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{

if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
str[i] -= 32;


for (j = 0; sep[j] != '\0'; j++)
{
if (str[i] == sep[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
{
str[i + 1] -= 32;
break;
}
}
i++;
}
return (str);
}
