#include <stdio.h>

int mult(int, int, int);

int main()
{
    int x, y, z;
    while (scanf("%d %d %d", &x, &y, &z) == 3)
    {
        printf("%d\n", mult(x, y, z));
    }
    return 0;
}

int mult(int x, int y, int z)
{
    return (x * y * z);
}