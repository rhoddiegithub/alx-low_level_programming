#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog
 * @name: The first member
 * @age: The second member
 * @owner: The third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
