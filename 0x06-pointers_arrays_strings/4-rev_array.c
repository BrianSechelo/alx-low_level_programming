#include "main.h"

/**
  * reverse_array- reverses the content of an array of integers
  *
  * @a: Function parameter
  *
  * @n: number of elements of the array
    */ 

void reverse_array(int *a, int n)
{
int i;

i=0;
while(n>0)
{
a[i]=a[n];
n--;
i++;
}
}
