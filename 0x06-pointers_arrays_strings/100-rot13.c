#include "main.h"

/**
 * rot13 - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: decrypted string
 */
char *rot13(char *n)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(s + i); i++)
{
	for (j = 0; j < 52; j++)
	{
		if (a[j] == *(s + i))
		{
			*(s + i) = b[j];
			break;
		}
	}
}
return (s);
}
