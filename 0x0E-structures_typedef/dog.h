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
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
void free_dog(dog_t *d);

#endif
