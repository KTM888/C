#include <stdio.h>

int main()
{
    int i;
    char array[61];
    char c;
    while (scanf("%60s %d %c", array, &i, &c) == 3)
    {
        array[i] = c;
        printf("%60s\n", array);
    }
    return 0;
}