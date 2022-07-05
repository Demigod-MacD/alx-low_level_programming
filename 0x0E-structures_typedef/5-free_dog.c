#include "dog.h"
#include <stdlib>

/**
 * free_dog - frees dog
 * @d: struct dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
