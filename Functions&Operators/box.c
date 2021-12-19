#include <stdio.h>

int volume(int, int, int);
int area(int, int, int);

int main()
{
    int w, h, d;
    while (scanf("%d %d %d", &w, &h, &d) == 3)
    {
        printf("The volume of a %d by %d by %d box is %d.\n", w, h, d, volume(w, h, d));
        printf("The surface area of a %d by %d by %d box is %d.\n\n", w, h, d, area(w, h, d));
    }
    return 0;
}

int volume(int w, int h, int d)
{
    return (d * w * h);
}

int area(int w, int h, int d)
{
    return (2 * (d * w + d * h + w * h));
}