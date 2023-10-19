#include "main.h"
/**
 * _strncpy-  concatenates two strings
 *
 * @dest: First function parameter
 *
 * @src: Second function parameter
 *
 * @n-Number of bytes to be used
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
int i,j;

i=0;
j=0;
while (dest[i] !='\0')
{
i++;
}
while (i<n)
{
dest[j]=src[j];
j++;
}
dest[j] = '\0';
return(dest);
}
