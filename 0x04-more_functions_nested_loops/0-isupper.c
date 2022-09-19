#include "main.h"
#include <stdio.h>

/**
 *  _isupper - Check if a character is uppercase or not
 *  @c: character to be tested
 *
 *  Return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}

