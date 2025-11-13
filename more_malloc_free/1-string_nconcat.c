#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allocated memory containing s1 + s2(n)
 *         or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

if (n >= len2)
n = len2;

new = malloc(len1 + n + 1);
if (new == NULL)
return (NULL);

for (i = 0; i < len1; i++)
new[i] = s1[i];

for (j = 0; j < n; j++)
new[i + j] = s2[j];

new[i + j] = '\0';

return (new);
}
