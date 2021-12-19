#include <stdio.h>

int fibonacci(int);

int main()
{
    int x;
    scanf("%d", &x);

    printf("%d\n", fibonacci(x));
    return 0;
}

int fibonacci(int x)
{
    int a, b, temp;
    a = 0;
    b = 1;

    while (a <= x)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
}