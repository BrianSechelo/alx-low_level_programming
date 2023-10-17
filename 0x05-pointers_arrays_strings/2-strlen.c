#include "main.h"
/**
 * _strlen -returns the length of a string
 * @s: parameter to be tested
 *return-return string length
   */

int _strlen(char *s)
{
int i;
int slength=0;
for(i=0;s[i]!='\0';i++)
slength++;
return (slength);
}
