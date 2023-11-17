#include "shell.h"
/**
 * calmdam_execute - the function to execute external command
 * @exec_input: the command to execute
 * Return: void (no return value)
 */

void calmdam_execute(char *exec_input)
{
	char *exec_file[100], *get_token, *get_env[] = {NULL};
	int star, lot = 0;
	int i = 0;
	pid_t to_process;
	char *exec_copy = malloc(calmdam_get_length(exec_input) + 1);
	if (exec_copy == NULL)
	{
		perror("Memory allocation failed");
		return;
	}

	calmdam_copy(exec_copy, exec_input,calmdam_get_length(exec_input) + 1);
	get_token = strtok(exec_copy, " \t\n");

	while (get_token != NULL && lot < 100)
	{
		exec_file[lot] = malloc(calmdam_get_length(get_token + 1));
		if (exec_file[lot] == NULL)
		{
			perror("Memory allocation failed");
			free(exec_copy);
			return;
		}
				calmdam_copy(exec_file[lot], get_token, calmdam_get_length(get_token) + 1);

				lot++;

				get_token = strtok(NULL, " \t\n");
				}

				exec_file[lot] = NULL;

				if (exec_file[0] != NULL)
				{
				to_process = fork();

				if (to_process == 0)
				{
				if (execve(exec_file[0], exec_file, get_env) == -1)
				{
				perror("Execution Failed");
				}
				}

				else if (to_process < 0)
				{
					perror("Fork Failed");
				}

				else
				{
					waitpid(to_process, &star, 0);

					if (WIFEXITED(star) && WEXITSTATUS(star) != 0)
					{
						perror("Error Detected");
					}
				}

				for (i = 0; i < lot; i++)
				{
					free(exec_file[i]);
				}
				}
				else
				{
					perror("command not found");
				}
				free(exec_copy);
}
