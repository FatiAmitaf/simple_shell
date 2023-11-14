#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h> 

/*String functions in strings.c*/
size_t strlen_custom(const char *str);
int strcmp_custom(char *str1, char *str2);
int check_characters(const char *haystack, const char *needle);
char *_strcat_custom(char *d, char *s);

/*String functions in strings2.c*/

#endif