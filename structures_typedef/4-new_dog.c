#include <stdlib.h>
#include "dog.h"

/**
 * _copy_str - allocates memory and copies a string
 * @src: source string to copy
 *
 * Return: pointer to newly allocated copy, or NULL on failure
 */
static char *_copy_str(char *src)
{
	char *dst;
	unsigned int len = 0, i;

	if (src == NULL)
		return (NULL);

	while (src[len] != '\0')
		len++;

	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dst[i] = src[i];

	return (dst);
}

/**
 * new_dog - creates a new dog with copied name and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to newly allocated dog_t, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _copy_str(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _copy_str(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
