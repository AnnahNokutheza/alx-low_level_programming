#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, temp;
	char *a, aux;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
