#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Main School students.
 * _strstr - locate a substring
 *
 * Return: Always 0.
 * @haystack: the string to look for a substring
 * @needle: the substring
 *
 * Return: first occurrence of the substring, if not found NULL
 */
int main(void)
char *_strstr(char *haystack, char *needle)
{
	char *s = "wworld of this";
	char *f = "world";
	char *t;
	int i, j;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
	i = j = 0;
	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			++j;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		j = 0;
		++i;
	}
	return (NULL);
}
