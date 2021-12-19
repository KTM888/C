#include <stdio.h>

int main()
{
    char str[61];
    int position;
    while (scanf("%60s %d", str, &position) == 2)
    {
        printf("%c\n", str[position]);
    }
    return 0;
}