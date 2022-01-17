#include <stdio.h>
#include <string.h>
#include "objects.h"
#include "go.h"
#include "look.h"

static int player_location = 0;

const char look_error_msg[] = "I dont understand what you want me to see";
const char go_error_msg[] = "I dont understand what you want me to go";
const char examine_error_msg[] = "There is nothing to examine in this location";

static char intro_msg[] = "You are in an empty room in the south of a haunted house, there is an exit door but she is locked...";

/**
struct Location
{
    const char *description;
    const char *tag;
} loc[4] = {
    {"Dark Room", "south"},
    {"corredor facing to an exit door but she is locked", "north"},
    {"room that contains two similar boxes. (maybe ask someone to help you)", "west"},
    {"room with someone inside", "east"}};

struct Object
{
    const char *description;
    const char *tag;
    struct Location *location;
} objs[6] = {
    {"A lamp", "lamp", &loc[0]},
    {"A door sign that says: \\n \t\"You can find the 'door key' in a treasure chest.\"", "door-sign", &loc[1]},
    {"A black teasure chest", "treasure-chest1", &loc[2]},
    {"A white treasure chest", "treasure-chest1", &loc[2]},
    {"A Friendly Dragon", "dragon", &loc[3]},
    {"yourself", "player", &loc[0]}};
**/

void exec_look(const char *verb)
{
    if (verb != NULL && strcmp(verb, "look") == 0)
    {
        printf("Your are in a %s.\n", player->location->description;
        listObjectsAtLocation(player->location);
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

// if lamp is not turned on the starting point cant go anywhere
// Create a map for the game (follows the player around)
// create a player that can move around
// the player can died if it opens the wrong treasure box
// create inventory command for the player to see objects
// add key to a random treasure box choosen by the Dragon
// make random choice when payer opens box
// allow converstantion with dragon (can tell which treasure box contains the key) if the player solves the challenge
// create a loop when player finishes the game so the program doesnt exit()
// create a help screen when the player first opens the game
// create dialogue at the start of the game to create background context

void exec_go(const char *noun)
{
    OBJECT *objs = getVisible("Where you want to go", noun);
    if (objs == NULL)
    {
        // handled by getVisible
    }
    if (noun != NULL && strcmp(noun, "south") == 0)
    {
        printf("You are currently in an %s", player->location->description);
        player_location = 0;
    }
    else if (noun != NULL && strcmp(noun, "north") == 0)
    {
        printf("You are in a %s", player->location);

        player_location = 1;
    }
    else if (noun != NULL && strcmp(noun, "east") == 0)
    {
        printf("You are in a %s", );
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

// for opening doors and objects (treasure chests)
void exec_open()
{
}

// for using objects inside inventory
void exec_use()
{
}

// for user to store objects
void exec_inventory()
{
}

// map of the adventure game
void exec_map()
{
}

void exec_instructions()
{
}
