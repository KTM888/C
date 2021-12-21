#include <stdbool.h>
#include <stdio.h>
#include "parse&exec.h"

static char input[101] = "look around";
static char welcome_msg[] = "Welcome to the Escape Game!";
static char goodbye_msg[] = "Goodbye!";

static bool get_input(void)
{
    printf("\n> ");
    return fgets(input, sizeof input, stdin) != NULL;
}

int main()
{
    puts(welcome_msg);
    while (parse_execute(input) && get_input())
        ;
    puts(goodbye_msg);
    return 0;
}