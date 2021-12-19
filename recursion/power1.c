#include <stdio.h>

int power(int, int);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", power(x, y));
    return 0;
}

int power(int x, int y)
{
    int result = 1;
    while (y > 0)
    {
        result = result * x;
        y--;
    }
}