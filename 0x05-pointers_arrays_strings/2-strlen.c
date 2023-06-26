#include "main.h"
/**
  *_strlen - Entry point
  *@s: the word to be analysize
  *Returns: Always 0
  */
int _strlen(char *s)
{
	int stringLength = 0;
	while (s[stringLength])
		stringLength++;
	return (stringLength);
}
