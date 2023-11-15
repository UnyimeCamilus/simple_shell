#include "shell.h"
/**
 * calmdam_builtin - the function to handle built-in commands
 * @builtin_exit: the exit keyword
 * Return: 0 on success and negative on failure
 */

int calmdam_builtin(char *builtin_exit)
{
	char **print_of_env = environ;

	if (calmdam_compare(builtin_exit, "exit") == 0)
	{
		calmdam_print("\n Exiting Shell... \n");
		free(builtin_exit);
		exit(0);
	}

	else if (calmdam_compare(builtin_exit, "env") == 0)
	{
		while (*print_of_env != NULL)
		{
			calmdam_print(*print_of_env);
			print_of_env++;
		}

		return (1);

	}
	return (0);
}
