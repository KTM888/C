#include <stdio.h>
#include <string.h>

const char look_error_msg[] = "I dont understand what you want me to see";
const char go_error_msg[] = "I dont understand what you want me to go";

static char intro_msg[] = "You are in an empty room in the south of a haunted house, there is an exit door but she is locked...";

struct Location
{
    const char *description;
    const char *tag;
}

location[4] = {
    {"empty room", "south"},
    {"corredor facing to an exit door", "north"},
    {"room with two similar treasure chests. (maybe ask someone to help you", "west"},
    {"room with a talking Dragon", "east"}};

static int player_location = 0;

void exec_look(const char *noun)
{
    if (noun != NULL && strcmp(noun, "around") == 0)
    {
        printf("Your are in a %s.\n", location[player_location].description);
    }
    else
    {
        puts(look_error_msg);
    }
}

void exec_go(const char *noun)
{
    if (noun != NULL && strcmp(noun, "south") == 0)
    {
        printf("You are currently in an %s", location[0].description);
        player_location = 0;
    }
    else if (noun != NULL && strcmp(noun, "north") == 0)
    {
        printf("You are in a %s", location[1].description);
        player_location = 1;
    }
    else if (noun != NULL && strcmp(noun, "east") == 0)
    {
        printf("You are in a %s", location[2].description);
        player_location = 2;
    }
    else if (noun != NULL && strcmp(noun, "west") == 0)
    {
        printf("You are in a %s", location[3].description);
        player_location = 3;
    }
    else
    {
        puts(go_error_msg);
    }
}