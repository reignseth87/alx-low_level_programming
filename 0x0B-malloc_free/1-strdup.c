#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: Always 0
 */

char *_strdup(char *str)
{
	char *str1;
	char *p;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (; str[len]; len++)
		;

	str1 = malloc(len + 1);
	p = str1;

	if (str1 == NULL)
		return (NULL);

	while (*str)
		*p++ = *str++;

	*p = '\0';

	return (str1);
}

