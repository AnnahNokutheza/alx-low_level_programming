#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attributes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: The attributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_annh - Typedef for dog structure
 */
typedef struct dog dog_annh;

void init_dog(struct dog *ptr, char *name, float age, char *owner);
void print_dog(struct dog *ptr);
dog_annh *new_dog(char *name, float age, char *owner);
void free_dog(dog_annh *ptr);
#endif
