#include <stdio.h>
#include <math.h>

double circumference(double);
double area(double);

int main()
{
    double x;
    while (scanf("%lf", &x) == 1)
    {
        printf("%.2lf %.2lf\n", circumference(x), area(x));
    }
    return 0;
}

double circumference(double x)
{
    return (2 * M_PI * x);
}

double area(double x)
{
    return (M_PI * (x * x));
}