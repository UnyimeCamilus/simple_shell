#include "shell.h"
/**
 * main - the main program where program starts
 * Return: Always 0 on success and negative on error
 */

int main(void)
{
	char *intake_reader = NULL;

	while (2*2)
	{
		calmdam_display();
		intake_reader = calmdam_read();

		if (intake_reader == NULL)
		{
			break;
		}

		if (calmdam_get_length(intake_reader) == 0)
		{
			free(intake_reader);
			continue;
		}

		if (calmdam_builtin(intake_reader))
		{
			free(intake_reader);
			continue;
		}

		calmdam_execute(intake_reader);

		free(intake_reader);

	}

	return (0);
}
