#include <stdio.h>

int inc(int);

int main()
{
    int x;
    while (scanf("%d", &x) == 1)
    {
        printf("%d\n", inc(x));
    }
    return 0;
}

int inc(int x)
{
    return (x + 1);
}