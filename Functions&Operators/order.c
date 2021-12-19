#include <stdio.h>

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) == 2)
    {
        if (x < y)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}