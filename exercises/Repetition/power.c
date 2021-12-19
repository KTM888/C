#include <stdio.h>

int power(int, int);

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) == 2)
    {
        printf("%d\n", power(x, y));
    }
    return 0;
}

int power(int x, int y)
{
    int i, r = 1;
    for (i = 1; i <= y; i++)
    {
        r = r * x;
    }
    return r;
}
