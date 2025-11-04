#include "main.h"

/**
 * _strstr - trouve la première occurrence de needle dans haystack
 * @haystack: chaîne principale
 * @needle: sous-chaîne à chercher
 *
 * Return: pointeur vers le début de needle, ou NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (haystack + i);
}

return (0);
}
