#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcpy_custom - Copy a string to another
 * @dest: The destination string to copy to
 * @src: The source string to copy
 * 
 * Return: A pointer to the destination string
*/
char *_strcpy_custom(char *dest, char *src)
{
char *result = dest;
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return result;
}

/**
 * _strdup_custom - Duplicates a string
 * @src: The source string to be duplicated
 * 
 * Return: A pointer to a newly allocated space in memory containing a
 * duplicate of the given string, or NULL if memory allocation fails 
*/
char *_strdup_custom_(const char *src)
{
int length = 0;
int i = 0;
if(src==NULL)
{
return NULL;
}
while (src[length] != '\0')
{
length++;
}
char *duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
{
return NULL;
}
for (i = 0; i <= length; i++)
{
duplicate[i] = src[i];
}
return duplicate;
}

/**
 * puts_function -Prints a string followed by a newline character
 * @str: The input string to be printed
 * 
 * Return: 1 on success
*/
void custom_puts(const char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
my_putchar(str[i]);
}
_putchar('\n');
}