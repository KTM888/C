#include <stdio.h>

int triple(int);

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n", triple(x));
    return 0;
}

int triple(int x)
{
    return (x * 3);
}