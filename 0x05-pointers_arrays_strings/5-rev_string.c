/**
  *rev_string - entry point
  *@s: the string parameter
  *Return: void
  */
void rev_string(char *s)
{
	int L, Z, half;
	char temp;

	for (L = 0; s[L] != '\0'; L++)
		;

		Z = 0;
	half = L / 2;

	while (half--)
	{
		temp = s[L - Z - 1];
		s[L - Z - 1] = s[Z];
		s[Z] = temp;
		Z++;
	}
}
