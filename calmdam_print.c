#include "shell.h"
/**
 * calmdam_print - the function to print string
 * @to_print: the argument to take
 * Return: nothing void
 */
void calmdam_print(const char *to_print)
{
	while (*to_print != '\0')
	{
		write(1, to_print, 1);
		to_print++;
	}

	write(1, "\n", 1);
}
