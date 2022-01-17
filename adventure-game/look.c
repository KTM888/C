#include <stdio.h>
#include "objects.h"

int listObjectsAtLocation(OBJECT *location)
{
    int count = 0;
    OBJECT *objs;

    for (objs = objs; objs < end_of_objects; objs++) // excluding player from locations
    {

        if (objs != player && objs->location == location)
        {
            if (count++ = 0)
            {
                printf("You see:\n");
            }
            printf("%s\n", objs->description);
        }
    }
    return count;
}