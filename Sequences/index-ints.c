#include <stdio.h>

int main()
{
    int len, n, i;
    int array[100];
    while (scanf("%d", &len) == 1)
    {
        for (i = 0; i < len; i++)
        {
            scanf("%d", &array[i]);
        }
        scanf("%d", &n);
        printf("%d\n", array[n]);
    }
    return 0;
}
