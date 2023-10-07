#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}

