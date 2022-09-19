#include <stdio.h>
#include "main.h"
/**
 * rev_string - update value.
 * @s: input to reverse
 * Return: (0)
 */
void rev_string(char *s)
{
	char rev = s[0];
	int fcounter = 0;
	int a;

	while (s[fcounter] != '\0')
		fcounter++;

	for (a = 0; a < fcounter; a++)
	{
		fcounter--;
		rev = s[a];
		s[a] = s[fcounter];
		s[fcounter] = rev;
	}
}
