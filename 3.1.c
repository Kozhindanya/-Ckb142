#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
/**
 * @brief Вычисляет значение функции 
 * @param x Значение аргумента
 * @return Значение функции в точке x
 */
double Y(const double x);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Расчитанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе 1
 */
int main()
{
    printf("Введите начало интервала (0):\n");
    double beginning = getDouble();

    printf("Введите конец интервала (1):\n");
    double end = getDouble();

    printf("Введите шаг интервала (0.1):\n");
    double step = getDouble();

    if (step <= 0 || beginning > end)
    {
        printf("Ошибка\n");
        return 1;
    }

    printf("x\t\tY\n");
    for (double x = beginning; x <= end + DBL_EPSILON; x += step)
    {
        if (x > 1.0 || cos(x) == 0.0)
        {
            printf("%.2f\t\tОтсутствует решение\n", x);
        }
        else
        {
            printf("%.2f\t\t%lf\n", x, Y(x));
        }
    }

    return 0;
}

double Y(const double x)
{
    return sqrt(1.0 - x) - tan(x);
}

double getDouble()
{
    double val = 0.0;
    if (scanf("%lf", &val) != 1)
    {
        printf("Ошибка\n");
        exit(1);
    }
    return val;
}
