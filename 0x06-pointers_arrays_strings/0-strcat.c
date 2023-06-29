#include "main.h"
/**
  *_strcat - Entry point
  *@dest: pointer of first parameter
  *@src: pointer of second parameter
  *Return: a string
  */
char *_strcat(char *dest, char *src)
{
	int L, Z;

	L = 0;
	while (dest[L] != '\0')
	{
		L++;
	}
	Z = 0;

	while (src[Z] != '\0')
	{
		dest[L] = src[Z];
		L++;
		Z++;
	}
	dest[L] = '\0';
	return (dest);
}
