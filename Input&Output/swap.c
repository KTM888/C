#include <stdio.h>

int main()
{
    int integer;
    char string[31];
    while (scanf("%d %30s", &integer, string) == 2)
    {
        printf("%s %d\n", string, integer);
    }
    return 0;
}