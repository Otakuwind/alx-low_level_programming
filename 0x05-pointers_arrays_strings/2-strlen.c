#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string.
 *@s: char input
 *Return: (0)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
