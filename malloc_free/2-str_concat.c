#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	res = malloc(sizeof(char) * (l1 + l2 + 1));
	if (res == NULL)
		return (NULL);

	while (i < l1)
	{
		res[i] = s1[i];
		i++;
	}
	while (j <= l2)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	return (res);
}
