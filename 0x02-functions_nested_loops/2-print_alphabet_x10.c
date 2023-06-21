#include "main.h"
/**
  *print_alphabet_x10 - Entry point
  *Return: Void
  */
void print_alphabet_x10(void)
{
	for (int i = 1; 1 <= 10; i++)
	{
		for (char x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
