#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{

	char rev = s[0];
	int fct = 0;
	int i;
	
	while(s[fct] != '\0')
		fct++;

	for(i = 0; i < fct; i++)
	{
		fct--;
		rev = s[i];
		s[i] = s[fct];
		s[fct] = rev;
	}
}	
