#include "main.h"

/**
  * _islower - Entry point
  *@c: the character to be checked
  *Return: 1 for lowercase else 0
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
