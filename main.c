#include <stdio.h>
#include <string.h>

/**
 * main - entry point of the simple shell project (Hsh)
 * @argc: arg count of arguments
 * @argv: arg vector 
 *
 * Return: 0 on success, 1 on error
 */

int main(__attribute__((unused))int argc, char **argv)
{
    char *input,**cmd;
    int stat = 1;

    while(stat)
    {
       input = get_input();
       cmd = tokenizer();
    }
    
}