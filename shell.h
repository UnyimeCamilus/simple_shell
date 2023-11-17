#ifndef shell_h
#define shell_h

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

int calmdam_compare(const char *first, const char *second);
size_t calmdam_get_length(const char *passed_intake);
void calmdam_print(const char *to_print);
void calmdam_copy(char *duplicate, const char *source, size_t size);
void calmdam_display(void);
char *calmdam_read(void);
int calmdam_builtin(char *builtin_exit);
void calmdam_execute(char *exec_input);


#endif
