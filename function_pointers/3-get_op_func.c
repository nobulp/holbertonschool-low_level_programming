#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Selects the correct arithmetic function
 *               based on the operator passed as argument.
 *
 * @s: pointer to the operator passed by the user
 *
 * Description:
 * The function compares the operator provided by the user
 * with a list of valid operators. If a match is found,
 * it returns a pointer to the corresponding function.
 *
 * Return:
 * Pointer to the function that performs the requested operation.
 * Returns NULL if no valid operator is found.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}

return (NULL);
}
