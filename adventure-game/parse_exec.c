#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool parse_execute(char *input)
{
    char *verb = strtok(input, " \n");
    char *noun = strtok(NULL, " \n");
    if (verb != NULL)
    {
        if (strcmp(verb, "quit") == 0)
        {
            return false;
        }
        else if (strcmp(verb, "look") == 0)
        {
            printf("Its very dark\n");
        }
        else if (strcmp(verb, "go") == 0)
        {
            printf("go where?");
        }
        else
        {
            printf("I don't know how to '%s'.\n", verb);
        }
    }
    return true;
}
