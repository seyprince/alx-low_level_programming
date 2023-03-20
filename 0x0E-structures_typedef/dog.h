#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Destription: just a lone dog struct in a big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
#endif
