#include "main.h"

/**
 * strlen_custom -Calculate the length of a string
 * @str: The input string
 * 
 * Return: The length of the string (without the null terminator)
*/
int _strlen_custom(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return count;
}

/**
 * strcmp_custom -Compare two strings
 * @str1: The first string to be compared
 * @str2: The second string to be compared
 * 
 * Return: 0 if strings are equal, positive value if str1 is greater,
 *         negative value if str2 is greater
*/
int strcmp_custom(char *str1, char *str2)
{
while(*str1 && *str2 && (*str1 == *str2))
{
str1++;
str2++;
}
if (*str1 == '\0' && *str2 == '\0')
{
return (0);
}
return *(const unsigned char *)str1 - *(const unsigned char *)str2;
}

/**
 * check_characters - Check if needle starts with haystack
 * @haystack: The string being checked
 * @needle: The string that we check for at the beginning of haystack
 * 
 * Return: 1 if haystack starts with needle,0 otherwise
*/
int check_characters(const char *haystack, const char *needle)
{
while(*needle != '\0' && *haystack == needle)
{
haystack++;
needle++;
}
return (*needle == '\0');
}

/**
 * _strcat_custom - Concatenate two strings
 * @dest: The destination string to concatenate to
 * @src: The source string to concatenate
 * 
 * Return: A pointer to the destination string
*/
char *_strcat_custom(char *d, char *s)
{
char *end_of_d = d;
int space_left = sizeof(d) - (end_of_d - d) - 1;
while (*end_of_d != '\0')
{
d++; 
}
while (*s != '\0' && space_left > 0)
{
*end_of_d = *s;
end_of_d++;
s++;
space_left--;
}
*end_of_d = '\0';
return d;
}
