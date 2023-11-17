#include "shell.h"
/**
 * calmdam_copy - to copy strings
 * @duplicate: the duplicate
 * @source: the source to copy
 * @size: the size of duplicate
 * Return: void
 */

void calmdam_copy(char *duplicate, const char *source, size_t size)
{
	size_t len = 0;

	for (; len < size && source[len] != '\0'; len++)
	{
		duplicate[len] = source[len];
	}

	duplicate[len] = '\0';
}
