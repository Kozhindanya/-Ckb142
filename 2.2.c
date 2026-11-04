#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Вычисляет значение функции  по заданной формуле
 * @param x значение параметра x
 * @return Расчитанное значение
 */
double y(const double x);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
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
    
