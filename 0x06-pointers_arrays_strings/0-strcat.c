#include <stdio.h>
#include <string.h>

int main()
{
char destination[] = "Hello ";
char source[] = "World!";
printf("Concatenated String: %s\n", strcat(destination,source));
return 0;
