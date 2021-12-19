#include <stdio.h>

float bmi(float, float);

int main()
{
    float w, h;
    while (scanf("%f %f", &h, &w) == 2)
    {
        if (bmi(w, h) < 18.5)
        {
            printf("underweight\n");
        }
        else if (bmi(w, h) >= 18.5 && bmi(w, h) < 25)
        {
            printf("normal weight\n");
        }
        else if (bmi(w, h) >= 25 && bmi(w, h) < 30)
        {
            printf("overweight\n");
        }
        else
        {
            printf("obese\n");
        }
    }
    return 0;
}

float bmi(float w, float h)
{
    return (w / (h * h));
}