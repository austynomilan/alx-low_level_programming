#include "main.h"
/**
  *puts_half - Entry point
  *@str: the string analysized
  *Return: ...
  */
void puts_half(char *str)
{
	int fullString, halfString;

	fullString = 0;
	while (str[fullString] != '\0')
	{
		fullString++;
	}

	halfString = 0;
	halfString = fullString / 2;

	if (fullString % 2 == 1)
		halfString++;
	while (halfString < fullString)
	{
		_putchar(str[halfString]);
		halfString++;
	}
	_putchar('\n');
}
