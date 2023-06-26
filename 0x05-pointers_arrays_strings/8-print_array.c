#include "main.h"
#include <stdio.h>
/**
  *print_array - Entry point
  *@a: the pointer parameter
  *@n: the integer number parameter
  *Return: ...
  */
void print_array(int *a, int n)
{
	int indexOfArr;

	for (indexOfArr = 0; indexOfArr < n; indexOfArr++)
	{
		printf("%d", a[indexOfArr]);
		if (indexOfArr != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}


