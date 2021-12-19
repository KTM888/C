#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z)
    {
        printf("equilateral\n");
    }
    else if (x == y || y != z || x == z)
    {
        printf("isosceles\n");
    }
    else if (x != y && y != z)
    {
        printf("scalene\n");
    }
    else if (x + y <= z)
    {
        printf("impossible\n");
    }
}