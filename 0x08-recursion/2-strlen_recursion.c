#include "main.h"

/**
  * _strlen_recursion -  function that returns the length of a string
  *
  * @s: String parameter
  *
  * Return: Length
  */
int _strlen_recursion(char *s)
{
	int lnt = 0;

	if (*s)
	{
	lnt++;
	lnt += _strlen_recursion(s + 1);
	}
	return (lnt);
}
