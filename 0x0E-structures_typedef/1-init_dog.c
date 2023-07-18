#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a struct
 * @d: input
 * @name: input
 * @owner: input
 * Description: 'initialize'
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
