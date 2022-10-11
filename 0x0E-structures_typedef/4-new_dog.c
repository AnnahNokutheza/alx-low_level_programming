#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr_dog;
int name_l = 0, own_l = 0;

if (name != NULL && owner != NULL)
{
name_l = _strlen(name) + 1;
own_l = _strlen(owner) + 1;
ptr_dog = malloc(sizeof(dog_t));

if (ptr_dog == NULL)
return (NULL);

ptr_dog->name = malloc(sizeof(char) * name_l);

if (ptr->name == NULL)
{
free(ptr_dog);
return (NULL);
}

ptr_dog->owner = malloc(sizeof(char) * own_l);

if (ptr_dog->owner == NULL)
{
free(ptr_dog->name);
free(ptr_dog);
return (NULL);
}

ptr_dog->name = _strcpy(ptr_dog->name, name);
ptr_dog->owner = _strcpy(ptr_dog->owner, owner);
ptr_dog->age = age;
}

return (ptr_dog);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 *  Return: String length
 */
int _strlen(char *s)
{
int mwanza = 0;

for (; *s != '\0'; s++)
{
mwanza++;
}

return (mwanza);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int annah;

for (annah = 0; src[annah] != '\0'; annah++)
{
dest[annah] = src[annah];
}

dest[annah++] = '\0';

return (dest);
}
