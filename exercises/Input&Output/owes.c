#include <stdio.h>

int main()
{
    float x;
    char name1[31], name2[31];
    while (scanf("%f %30s %30s", &x, name1, name2) == 3)
    {
        printf("%s owes $%.2f dollars to %s.\n", name1, x, name2);
    }
    return 0;
}
