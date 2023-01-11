#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *r_string;
	int r_index = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len] || s2[len]; len++)
		;

	r_string = malloc(sizeof(char) * len);

	if (r_string == NULL)
		return (NULL);

	for (len = 0; s1[len]; len++)
		r_string[r_index++] = s1[len];

	for (len = 0; s2[len]; len++)
		r_string[r_index++] = s2[len];

	return (r_string);
}
