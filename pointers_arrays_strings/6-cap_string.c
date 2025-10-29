#include "main.h"
#include <string.h>

/**
 * cap_string - met une majuscule au début de chaque mot d'une chaîne
 * @str: la chaîne à modifier
 *
 * Return: pointeur vers la chaîne modifiée
 */
char *cap_string(char *str)
{
int i = 0;
char separators[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{

if (i == 0 || strchr(separators, str[i - 1]) != NULL)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32; /* Convertit en majuscule */
}
}
i++;
}
return (str);
}
