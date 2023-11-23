#include "main.h"
/**
 * binary_to_uint:  converts a binary number to an unsigned int
 * @b: binary number to be converted
 * Return: converted number
 */
 unsigned int binary_to_uint(const char *b)
 {
int j = 2;
unsigned int i;
unsigned int x;
unsigned int m = 1;
unsigned int k = 0;
unsigned int len;

if (b == NULL)
return (0);
for (len = 0; b[len] != '\0'; len++);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != 0 || b[i] != 1)
return (0);
for (x = len - 1; x > 0; x--)
m = m *j;
k = k + b[x] * m;
len--;
m = 1;
}
return (k);
}
