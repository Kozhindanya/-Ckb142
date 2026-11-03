#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846

double getDouble();

double y(const double x);

int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf",y(x));
    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}

double y(const double x)
{
    const double a = 1.36;
    
    if (x < 0.5)
    {
        return (M_PI / 2.0)+ x * a - exp(a * x);
    }
    else
    {
        return pow(x, 3.0) * a + 28.0;
    }
}
    
