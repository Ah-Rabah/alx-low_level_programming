#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - sum
  * @a: prototype
  * @b: prototype
  *
  * Return: .
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - diff
  * @a: prototype
  * @b: prototype
  *
  * Return: .
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - the product
  * @a: prototype
  * @b: prottype
  *
  * Return: .
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - result of div
  * @a: prototype
  * @b: prtotype
  *
  * Return: .
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - remender or division
  * @a: prototype
  * @b: prototype
  *
  * Return: nothing
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
