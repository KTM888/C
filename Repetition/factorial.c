#include <stdio.h>

int factorial(int);

int main()
{
    int x;
    while (scanf("%d", &x) == 1)
    {
        printf("%d\n", factorial(x));
    }
    return 0;
}

int factorial(int x)
{
    int i, r = 1;
    for (i = 1; i <= x; i++)
    {
        r = r * i;
    }
    return r;
}