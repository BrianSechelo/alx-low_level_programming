#include "main.h"
#include "stdlib.h"
/**
 *   _strdup - a function that returns a pointer to a newly allocated space in memory
 * @ str-parameter for string of characters
 * Return: NULL if string is NULL or insufficient memory else returns pointer to a new string
 */
char *_strdup(char *str)
{
unsigned int k, j;
char *ptr;
if (str == NULL)
{
return (NULL);
}
k = 0;
while (str[k] != '\0')
{
k++;
}
ptr = (char *)malloc((k + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (j = 0; j < k; j++)
{
ptr[j] = str[j];
}
return (ptr);
}
