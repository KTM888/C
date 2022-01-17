typedef struct object
{
    const char *description;
    const char *tag;
    struct object *location;
} OBJECT;

extern OBJECT objs[];
#define dark_room (objs + 0)
#define corredor (objs + 1)
#define treasure_room (objs + 2)
#define dragon_room (objs + 3)
#define lamp (objs + 4)
#define door_sign (objs + 5)
#define treasure_chest1 (objs + 6)
#define treasure_chest2 (objs + 7)
#define player (objs + 8)

#define end_of_objects (objs + 9)