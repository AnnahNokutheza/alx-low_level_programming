#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - lowercase alphabets
 *
 * Return: Always (Success)
 */
int main(void)
{
	srand(time(0));

	char low;

	for (low = 'a'; low <= 'z'; low++)

	putchar(low);
	printf('\n');
return (0);
}
