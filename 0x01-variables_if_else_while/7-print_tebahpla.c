#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0
  */
int main(void)
{
	int y = 122;

	while (y >= 97)
	{
		putchar(y);
		y--;
	}
	putchar('\n');
	return (0);
}
