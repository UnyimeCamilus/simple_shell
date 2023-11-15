#include "shell.h"
/**
 * calmdam_get_length - function to get length of string
 * @passed_intake: the intake passed to the function calculate the length
 * Return: a length of a character
 */
int calmdam_get_length(const char *passed_intake)
{
	int calc_length = 0;

	while (*passed_intake != '\0')
	{
		calc_length++;
		passed_intake++;
	}

	return (calc_length);
}
