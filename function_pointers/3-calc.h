#ifndef CALC_H
#define CALC_H


#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


int op_addition(int a, int b);
int op_subtraction(int a, int b);
int op_multiplication(int a, int b);
int op_divisio(int a, int b);
int op_modulo(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
