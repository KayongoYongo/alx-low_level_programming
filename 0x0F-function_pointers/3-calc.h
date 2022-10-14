#ifndef _3_CALC_H
#define _3_CALC_H

/*This function finds the sum of the two arguments*/
int op_add(int a, int b);
/*This function finds the difference between the two arguments*/
int op_sub(int a, int b);
/*This function multiplies the two arguments*/
int op_mul(int a, int b);
/*This function finds the divison result*/
int op_div(int a, int b);
/*This function finds the remainder between the argument*/
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

/**
 *struct op - Struct op
 *
 *@op: The operator
 *@f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif

