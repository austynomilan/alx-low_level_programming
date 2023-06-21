#include "main.h"
/**
  *print_sign - Entry point
  *@n: the numbr to be checked
  *Return: 1 for postive number, -1 for negative number and else 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
