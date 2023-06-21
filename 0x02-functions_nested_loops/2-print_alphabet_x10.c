#include "main.h"
/**
  *print_alphabet_x10 - Entry point
  *Return: Void
  */
void print_alphabet_x10(void)
{
	char x;
	int i;

	i = 0;

	while (i < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
}
