#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "location.h"

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
            exec_look(noun);
        }
        else if (strcmp(verb, "go") == 0)
        {
            exec_go(noun);
        }
        else
        {
            printf("I don't know how to '%s'.\n", verb);
        }
    }
    return true;
}
