#include "3-calc.h"
#include <stdlib.h>

/**
*get_op_func - selects the correct function to perform
*the operation asked by the user. You’re not allowed
*to declare any other function.
*@s: operator passed as argument
*
*Return: A pointer to the function corresponding to
*the operator given in parameter
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

while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;

return (ops[i].f);

}
