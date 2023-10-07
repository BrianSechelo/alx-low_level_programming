#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 100; i < 126; i++)
	{
		if (i != 104 && i != 116)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
