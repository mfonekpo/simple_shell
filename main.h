#ifndef MAIN_H
#define MAIN_H

#include <errno.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

void signal_handler(int signum);
void prompt(void);

char **_strtok(char *str, char *delim);

char **getPath(char **env);
char *get_full_cmd(char *path, char *command);
int exec_cmd(char **tokens, char *absolute_path, char *shell, char **env);
void error_message(char **tokens, char *full_path, char *shell, size_t count);

int child_process(char **tokens, char *absolute_path,
		char *shell, char **env);

int change_dir(const char *path);
void print_env(void);

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
int _isdigit(char *num);
int _atoi(char *s);

void _EOF(char *buf);
void free_memory(char **buffer);
void exit_shell(char **args, char *shell, size_t count, int exit_status);

#endif
