#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print if the number is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	printf("Last digit of %d is %s and is greater than 5", n, l);
	if (l == 0)
	printf("Last digit of %d is %s and is 0", n, l);
	else
	printf("Last digit of %d is %s and is less than 6 and not 0", n, l);
	return (0);
}
