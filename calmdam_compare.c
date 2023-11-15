#include "shell.h"
/**
 * calmdam_compare - the function take string.
 * @first: the first take-in
 * @second: the second take-in.
 * Return: 0 on success.
 */

int calmdam_compare(const char *first, const char *second)
{
	while (*first && *second && (*first == *second))
	{
		first++;
		second++;
	}

	if (*first == *second)
	{
		return (0);
	}
	else if (*first < *second)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
