#include <stdio.h>

int main()
{
    int x, y, iterations;
    scanf("%d %d", &x, &y);
    iterations = y - x;
    while (iterations >= 0)
    {
        printf("%d\n", x);
        x++;
        iterations--;
    }
    return 0;
}