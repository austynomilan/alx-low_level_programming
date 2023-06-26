#include "main.h"
/**
  *print_rev - Entry point
  *@s: the string to be reversed
  *Return: ...
  */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
