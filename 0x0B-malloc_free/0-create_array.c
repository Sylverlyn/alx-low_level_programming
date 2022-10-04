#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates an array of chars & initializes
 * it with a specific char.
 * @size: the array size
 * @c: char to initialize array
 * Return: array @a
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
