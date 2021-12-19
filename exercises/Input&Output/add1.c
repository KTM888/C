#include <stdio.h>

int add(int, int);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", add(x, y));
    return 0;
}

int add(int x, int y)
{
    return (x + y);
}