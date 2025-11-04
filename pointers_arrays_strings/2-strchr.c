#include "main.h"

/**
 * _strchr - cherche la première occurrence de c dans s
 * @s: chaîne à analyser
 * @c: caractère à trouver
 *
 * Return: pointeur vers la première occurrence ou NULL
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (0);
}
