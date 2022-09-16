#include <stdlib.h>
#include <time.h>
#include <stdio>



void positive_or_negative(int i);
{
	int n;

srand(time(0));
n = i;
if (n > 0)
	printf("%d positive\n", n);
if (n = 0)
	printf("%d zero\n", n);
if (n < 0)
	printf("%d negative\n", n);

return (0);
}
int main(void)
{

	int i;

	i = 0;
	positive_or_negative(i);


	return (0);

}
