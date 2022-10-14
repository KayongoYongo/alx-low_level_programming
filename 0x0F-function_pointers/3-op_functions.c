#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - adds 5 functions
 *@a: int a
 *@b: int b
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - a subtract function
 *@a: int a
 *@b: int b
 *Return: subtracts b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies a and b
 *@a: int a
 *@b: int b
 *Return: multiplies a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides a by b
 *@a: int a
 *@b: int b
 *Return: quotient of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - finds the reminder
 *@a: int a
 *@b: int b
 *Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
