#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Definition of the dog structure
 * The structure represents information about the dog,
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the dog owner
 *
 * Description - This structure contains details about a dog,
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
