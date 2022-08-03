#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - identify function
 * @s: funct
 * Return: int
 **/
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
	int j;

	j = 0;
	while (j < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[j].f);
		}
		j++;
	}


	return (NULL);
}
