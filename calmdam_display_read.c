#include "shell.h"
/**
 * calmdam_display - the function to display prompt and read user input
 * Return: void
 */
void calmdam_display(void)
{
	write(1, "#cisfun$ ", 9);

	fflush(stdout);
}

/**
 * calmdam_read - the function to read user input
 * Return: a pointer to a character
 */

char *calmdam_read(void)
{
	char *user_input_command = NULL;
	size_t user_len_size = 0;
	ssize_t user_reader = 0;
	ssize_t looter = 0;

	user_reader = getline(&user_input_command, &user_len_size, stdin);

	if (user_reader == -1)
	{
		calmdam_print("\n Closing shell... \n");
		free(user_input_command);
		return (NULL);
	}

	for (looter = 0; looter < user_reader; ++looter)
	{
		if (user_input_command[looter] == '\n')
		{
			user_input_command[looter] = '\0';
			break;
		}
	}

	return (user_input_command);
}
