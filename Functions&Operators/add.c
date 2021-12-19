#include <stdio.h>

int add(int, int);

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) == 2)
    {
        printf("%d\n", add(x, y));
    }
    return 0;
}

int add(int x, int y)
{
    return (x + y);
}