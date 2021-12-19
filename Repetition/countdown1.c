#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x > 0)
    {
        printf("%d\n", x);
        x--;
    }
    printf("Go!\n");
    return 0;
}