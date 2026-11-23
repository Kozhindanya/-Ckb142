#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

/**
 * @brief Рассчитывает значение функции
 * @param x - значение переменной x
 * @return Рассчитанное значение
 */
double Y(const double x);

/**
 * @brief Рассчитывает сумму функционального ряда с заданной точностью
 * @param x - значение переменной x
 * @param e - точность вычислений
 * @return Сумма ряда
 */
double getSum(const double x, const double e);

/**
 * @brief Проверяет, что step - положительное число
 * @param step - шаг интервала
 */
void checkStep(const double step);

/**
 * @brief Проверяет, что e - положительное число
 * @param e - точность вычислений
 */
void checkE(const double e);

/**
 * @brief Проверяет, что begin <= end
 * @param begin - начало интервала
 * @param end - конец интервала
 */
void checkBE(const double begin, const double end);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double begin = 0.1;
    const double end = 1.0;
    const double step = 0.1;
    const double e = pow(20.0, -4.0);

    checkBE(begin, end);
    checkStep(step);
    checkE(e);

    printf("x\t\tY(x)\t\tS(x)\n");
    for (double x = begin; x <= end + DBL_EPSILON; x += step)
    {
        printf("%lf\t%lf\t%lf\n", x, Y(x), getSum(x, e));
    }

    return 0;
}

double Y(const double x)
{
    return (exp(x) - exp(-x)) / 2.0;
}

double getSum(const double x, const double e)
{
    double s = x;
    double a = x;
    int n = 1;

    while (fabs(a) > e)
    {
        a = a * (x * x) / (2.0 * n * (2.0 * n + 1.0));
        s += a;
        n++;
    }

    return s;
}

void checkStep(const double step)
{
    if (step <= 0)
    {
        printf("Ошибка: шаг должен быть положительным\n");
        exit(1);
    }
}

void checkE(const double e)
{
    if (e <= 0)
    {
        printf("Ошибка: точность должна быть положительной\n");
        exit(1);
    }
}

void checkBE(const double begin, const double end)
{
    if (begin > end)
    {
        printf("Ошибка: начало интервала больше конца\n");
        exit(1);
    }
}
