#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "commands.h"

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
            exec_look(verb);
        }
        else if (strcmp(verb, "go") == 0)
        {
            exec_go(noun);
        }
        else if (strcmp(verb, "examine") == 0)
        {
            exec_examine(verb);
        }
        else
        {
            printf("I don't know how to '%s'.\n", verb);
        }
    }
    return true;
}
