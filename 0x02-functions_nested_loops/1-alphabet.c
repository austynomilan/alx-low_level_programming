#include "main.h"
/**
  *print_letter - Entry point 
  *Return: Always 0
  */
void print_letter(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
