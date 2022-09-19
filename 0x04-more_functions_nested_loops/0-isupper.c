#include "main.h"
#include <stdio.h>

/**
 *  _isupper - Check if a character is uppercase or not
 *  @c: input
 *
 *  Return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}

