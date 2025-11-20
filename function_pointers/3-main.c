#include "3-calc.h"

/**
 * main - Entry point of the program. Performs arithmetic operations
 *        based on user input.
 *
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Description:
 * The program expects exactly 3 arguments:
 * - argv[1]: first integer
 * - argv[2]: operator (+, -, *, /, %)
 * - argv[3]: second integer
 *
 * Return:
 * 0 on success
 * Exits with:
 * 98 if the number of arguments is wrong
 * 99 if the operator is invalid
 * 100 if the user tries to divide or modulo by 0
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf("Error\n");
exit(99);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", op_func(num1, num2));
return (0);
}
