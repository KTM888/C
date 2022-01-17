#include <stdio.h>
#include "objects.h"

OBJECT objs[] = {
    {"Dark Room", "dark_room", NULL},
    {"corredor facing to an exit door but she is locked", "corredor", NULL},
    {"room that contains two similar boxes. (maybe ask someone to help you)", "treasure_room"},
    {"room with someone inside", "dragon room", NULL},
    {"A lamp", "lamp", dark_room},
    {"A door sign that says: \n \t\"You can find the 'door key' in a treasure chest.\"", "door_sign", corredor},
    {"A black teasure chest", "treasure_chest1", treasure_room},
    {"A white treasure chest", "treasure_chest2", treasure_room},
    {"A Friendly Dragon", "dragon", dragon_room},
    {"yourself", "player", dark_room}};