#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array with
 * Return: pointer to the array, or NULL if it fails or size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
