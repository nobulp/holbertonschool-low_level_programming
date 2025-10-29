#include "main.h"

/**
 * string_toupper - change toutes les lettres minuscules d’une chaîne en majuscules
 * @str: chaîne de caractères à modifier
 *
 * Return: pointeur vers la chaîne modifiée
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}

return (str);
}
