#include "main.h"
#include <stdio.h>
/**
 *swap_int - function that swaps the values of two integers.
 *@a: input 1
 *@b: input 2
 *Return: Always 0.
 */
void swap_int(int *a, int *b);
{

	int n = *a;
	*a = *b;
	*b = n;
}
