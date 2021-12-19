#include <stdio.h>

int triple(int);

int main()
{
    int x;
    while (scanf("%d", &x) == 1)
    {
        printf("%d\n", triple(x));
    }
}

int triple(int x)
{
    return (x * 3);
}
