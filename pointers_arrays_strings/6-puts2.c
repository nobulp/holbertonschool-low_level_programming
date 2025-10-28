#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to print
 *
 * Description: prints one character out of two,
 * starting with the first one, followed by a new line.
 */
void puts2(char *str)
{
int i = 0;


while (str[i] != '\0')
{

if (i % 2 == 0)
_putchar(str[i]);
i++;
}


_putchar('\n');
}
