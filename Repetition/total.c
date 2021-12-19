#include <stdio.h>

int main()
{
    int n, x, y, total;
    scanf("%d", &n);
    while (n > 0)
    {
        scanf("%d", &x);
        total = total + x;
        n--;
    }
    printf("%d\n", total);
    return 0;
}