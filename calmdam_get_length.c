#include "shell.h"
/**
 * calmdam_get_length - function to get length of string
 * @passed_intake: the intake passed to the function calculate the length
 * Return: a length of a character
 */
size_t calmdam_get_length(const char *passed_intake)
{
	size_t calc_length = 0;

	while (passed_intake[calc_length] != '\0')
	{
		calc_length++;
	}

	return (calc_length);
}
