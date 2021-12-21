#include <stdio.h>
#include <string.h>

static int player_location = 0;

const char look_error_msg[] = "I dont understand what you want me to see";
const char go_error_msg[] = "I dont understand what you want me to go";
const char examine_error_msg[] = "There is nothing to examine in this location";

static char intro_msg[] = "You are in an empty room in the south of a haunted house, there is an exit door but she is locked...";

struct Location
{
    const char *description;
    const char *tag;
} loc[4] = {
    {"Dark Room", "south"},
    {"corredor facing to an exit door but she is locked", "north"},
    {"room that contains two similar boxes. (maybe ask someone to help you)", "west"},
    {"room with a talking Dragon", "east"}};

struct Object
{
    const char *description;
    const char *tag;
    struct Location *location;
} objs[5] = {
    {"A lamp", "lamp", &loc[0]},
    {"A door sign that says: \n \t\"You can find the 'door key' in a treasure chest.\"", "door-sign", &loc[1]},
    {"A black teasure chest", "treasure-box1", &loc[2]},
    {"A white treasure chest", "treasure-box2", &loc[2]}};

void exec_look(const char *verb)
{
    if (verb != NULL && strcmp(verb, "look") == 0)
    {
        printf("Your are in a %s.\n", loc[player_location].description);
    }
    else
    {
        puts(look_error_msg);
    }
}

void exec_examine(const char *verb)
{
    if (verb != NULL && strcmp(verb, "examine") == 0)
    {
        if (player_location == 0)
        {
            printf("You have found: \n - %s\n", objs[0].description);
        }
        else if (player_location == 1)
        {
            printf("You have found: \n - %s\n", objs[1].description);
        }
        else if (player_location == 2)
        {
            printf("You have found: \n - %s \n -%s\n", objs[2].description, objs[3].description);
        }
        else
        {
            puts(examine_error_msg);
        }
    }
}
void exec_go(const char *noun)
{
    if (noun != NULL && strcmp(noun, "south") == 0)
    {
        printf("You are currently in an %s", loc[0].description);
        player_location = 0;
    }
    else if (noun != NULL && strcmp(noun, "north") == 0)
    {
        printf("You are in a %s", loc[1].description);
        player_location = 1;
    }
    else if (noun != NULL && strcmp(noun, "east") == 0)
    {
        printf("You are in a %s", loc[2].description);
        player_location = 2;
    }
    else if (noun != NULL && strcmp(noun, "west") == 0)
    {
        printf("You are in a %s", loc[3].description);
        player_location = 3;
    }
    else
    {
        puts(go_error_msg);
    }
}

void exec_open()
{
}

void exec_use()
{
}

void exec_inventory()
{
}

void exec_map()
{
}

void exec_instructions()
{
}
