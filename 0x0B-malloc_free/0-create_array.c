#include <stdlib.h>
/**
 * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	unsigned int i;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

//alternate solution

char *create_array(unsigned int size, char c)
{
	int i;
	char *str;

	if (size == 0)
		return NULL;
	else if (str == 0)
		return NULL;

	str = malloc(sizeof(char) * size)
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);

}
