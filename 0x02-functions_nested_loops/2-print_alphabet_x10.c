#include "main.h"
/**
 *print_alphabet_x10 - Prints the alphabet 10 times.
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int sh, a;

	for (sh = 0; sh <= 9; sh++)
	{
		for (a = 97; a <= 122; a++)
		{
		_putchar(a);
		}
_putchar('\n');
	}
}
