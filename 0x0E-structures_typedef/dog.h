#ifndef _DOG_H_
#define _DOG_H_

int _putchar(char c);

/**
 *dog_t - Typedef struct dog.
 */

typedef struct dog dog_t;

/**
 *struct dog - stores information dog
 *@name: name dog
 *@age: age dog
 *@owner: owner dog.
 *
 *Description: struct called "dog" store name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
