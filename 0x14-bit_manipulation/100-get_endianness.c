#include <stdio.h>
#include "main.h"
/**
 *get_endianness- Entry into the progarm
 *Return: Always 0
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
