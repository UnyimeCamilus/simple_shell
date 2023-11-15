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

	pid_t to_process = fork();

	if (to_process == 0)
	{
		get_token = strtok(exec_input, " \t\n");

		while (get_token != NULL && lot < 100)
		{
			exec_file[lot++] = get_token;
			get_token = strtok(NULL, " \t\n");
		}

		exec_file[lot] = NULL;
		/**exec_file[0] = exec_input;*/
		/**exec_file[1] = NULL;*/
		if (execve(exec_file[0], exec_file, get_env) == -1)
		{
			perror("Execution Failed");
			exit(EXIT_FAILURE);
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
}
