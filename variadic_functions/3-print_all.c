#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0, printed = 0;
char *str;

va_start(ap, format);

while (format && format[i])
{
if (format[i] == 'c')
{
printf("%c", va_arg(ap, int));
printed = 1;
}
else if (format[i] == 'i')
{
printf("%d", va_arg(ap, int));
printed = 1;
}
else if (format[i] == 'f')
{
printf("%f", va_arg(ap, double));
printed = 1;
}
else if (format[i] == 's')
{
str = va_arg(ap, char *);
if (!str)
str = "(nil)";
printf("%s", str);
printed = 1;
}

if (format[i + 1] && printed == 1)
printf(", ");

printed = 0;
i++;
}

printf("\n");
va_end(ap);
}
