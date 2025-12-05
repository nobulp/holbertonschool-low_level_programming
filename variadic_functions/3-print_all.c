#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0, j;
char *str;

void print_char(va_list ap)
{
printf("%c", va_arg(ap, int));
}

void print_int(va_list ap)
{
printf("%d", va_arg(ap, int));
}

void print_float(va_list ap)
{
printf("%f", va_arg(ap, double));
}

void print_string(va_list ap)
{
str = va_arg(ap, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}

typedef struct printer
{
char t;
void (*f)(va_list);
} printer_t;

printer_t ops[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};

va_start(ap, format);

while (format && format[i])
{
j = 0;
while (ops[j].t)
{
if (ops[j].t == format[i])
{
ops[j].f(ap);
if (format[i + 1] != '\0')
printf(", ");
}
j++;
        }
        i++;
    }

    printf("\n");
va_end(ap);
}
