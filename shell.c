#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *main -  a prompt and wait for the user to type a command
 *Return: 0
 */
int main(void)
{
	size_t buf_size;
	char  *buf = NULL;

	while(1)
	{
	write(1, "#cisfun$ ", 9);
	getline(&buf, &buf_size, stdin);
	}
	return (0);
}
