#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert the params passed to the program to string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: ...
 */
char *argstostr(int ac, char **av)
{
int ch = 0, abc = 0, efg = 0, k = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

while (abc < ac)
{
while (av[abc][efg])
{
ch++;
efg++;
}

efg = 0;
abc++;
}

s = malloc((sizeof(char) * ch) + ac +1);

abc = 0;
while (av[abc])
{
while (av[abc][efg])
{
s[k] = av[abc][efg];
k++;
efg++;
}

s[k] = '\n';

efg = 0;
k++;
abc++;
}

k++;
s[k] = '\0';
return (s);
}
