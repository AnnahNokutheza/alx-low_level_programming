#include "main.h"
/**
 *int _islower(int c)
 * @c: is the int that will use for the argumet of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
