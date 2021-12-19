#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x) == 1)
    {
        if (x >= 4 && x <= 11)
        {
            printf("Good morning\n");
        }
        else if (x >= 12 && x <= 17)
        {
            printf("Good afternoon\n");
        }
        else if (x >= 18 && x <= 23)
        {
            printf("Good evening\n");
        }
        else
        {
            printf("Hi\n");
        }
    }
    return 0;
}
