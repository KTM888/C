#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "objects.h"

static bool objectHasTag(OBJECT *objs, const char *noun)
{
    return noun != NULL && *noun != '\0' && strcmp(noun, objs->tag) == 0;
}

static OBJECT *getObject(const char *noun) // function to determine the object which belongs to a given noun. It does this by returning a pointer that matcvhes a tag for that specific noun. If no matching tag can be found, NULL is returned.
{
    OBJECT *objs, *res = NULL;
    for (objs = objs; objs < end_of_objects; objs++)
    {
        if (objectHasTag(objs, noun))
        {
            res = objs;
        }
    }
}

OBJECT *getVisible(const char *intention, const char *noun) // function that works with getObject. It will output a prefixed message if no object matches the given noun, or if it is no visible by the user (determined by location). In either case, the NULL value is returned to inform that no action needs to be taken.
{
    OBJECT *objs = getObject(noun);
    if (objs == NULL)
    {
        printf("I don't understand %s.\n", intention);
    }
    else if (!(objs == player ||                              // the player himself. (used an object)
               objs == player->location ||                    // the current location of the player|
               objs->location == player ||                    // objects that the player holds
               objs->location == player->location ||          // objects present that that location
               objs->location == NULL ||                      // locations where the player can still go.
               objs->location->location == player ||          // objects inside another object present held by the player
               objs->location->location == player->location)) // objects inside another object present at current location
    {
        printf("You dont see any %s here", noun);
        objs = NULL;
    }
    return objs;
}