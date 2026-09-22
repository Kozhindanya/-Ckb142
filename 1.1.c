#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет значение функции  по заданной формуле
 * @param x значение переменной x
 * @param y значение переменной y
 * @param z значение переменной z
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);

/**
 * @brief Вычисляет значение функции B по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программму
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    const double x = 0.61;
    const double y = 0.9;
    const double z = 0.3;
    printf("a = %.3f\n", A(x, y, z));
    printf("b = %.3f", B(x, y, z));
    return 0;
}

double A(const double x, const double y, const double z)
{
    return (pow(z,2*x)+pow(y,-x)*cos(z+y)*x)/(x+1); 
}
//pow() - функция для возведения числа в степень

double B(const double x, const double y, const double z)
{
    return sqrt(pow(x,2)+y)-pow(y,2)*pow(sin((x+z)/x),3) ;
//sqrt() -функция для вычисления корня 
}
