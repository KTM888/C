#include <math.h>
#include <stdio.h>

int main()
{
    double x, y, r;
    char o;
    while (scanf("%lf %c %lf", &x, &o, &y) == 3)
    {
        switch (o)
        {
        case '+':
            r = 1;
            r = x + y;
            break;
        case '-':
            r = 1.00;
            r = x - y;
            break;
        case '*':
            r = 1;
            r = x * y;
            break;
        case '/':
            r = 1;
            r = x / y;
            break;
        case '^':
            r = 1;
            r = pow(x, y);
            break;
        }
        printf("%.2lf\n", r);
    }
    return 0;
}