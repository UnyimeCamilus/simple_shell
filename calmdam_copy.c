#include "shell.h"
/**
 * calmdam_copy - to copy strings
 * @source_copy: the source to copy
 * Return: the pointer to a character
 */

char *calmdam_copy(const char *source_copy)
{
	size_t len = 0;
	size_t ite = 0;
	char *take_copy = (char *)malloc(len + 1);

	if (source_copy == NULL)
	{
		return (NULL);
	}

	while (source_copy[len] != '\0')
	{
		len++;
	}

	if (take_copy != NULL)
	{
		for (; ite < len; ite++)
		{
			take_copy[ite] = source_copy[ite];
		}

		take_copy[ite] = '\0';
	}
	return (take_copy);
}
