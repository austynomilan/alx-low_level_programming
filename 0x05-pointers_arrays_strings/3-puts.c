#include "main.h"
/**
  *_puts - entry point
  *@str: the string to be inputted
  *Return: ...
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
