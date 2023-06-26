#include "main.h"
/**
  *_strcpy - Entry point
  *@dest: the pointer parameter
  *@src: the character pointer
  *Return: always 0
  */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
