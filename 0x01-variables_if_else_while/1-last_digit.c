#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always Successs
 */
int main(void)
{
	int n;
	int L;
	char str[] "Last digit of"

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;

	if (L > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, L);

	if (1 == 0)
		printf("%s %d is %d is 0\n", str, n, L);
	
	if (L < 6)
		printf("%s %d is %d and less than 6 and not 0\n", str, n, L);
return (0);
}
