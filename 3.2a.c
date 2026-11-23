#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Считывает значение с клавиатуры
 * @return Считанное значение
 */
int getInt();

/**
 * @brief Проверяет, что n - неотрицательное
 * @param n верхний предел суммирования ряда
 */
void checkN(const int n);

/**
 * @brief Считает сумму членов последовательности от k = 0 до n
 * @param n верхний предел суммирования ряда
 * @return Рассчитанное значение
 */
double sum_calculate(const int n);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе 1
 */
int main()
{
    printf("Введите n - верхний предел суммирования ряда:\n");
    int n = getInt();
    checkN(n);
    double sum = sum_calculate(n);
    printf("Сумма = %.15f", sum);
    return 0;
}

double sum_calculate(const int n)
{
    double sum = 0.0;
    double element = 1.0;
    for (int k = 0; k <= n; k++)
    {
        sum += element;
        element = element * (-1.0) * (k + 2.0) / ((k + 1.0) * (k + 1.0));
    }
    return sum;
}

int getInt()
{
    int n = 0;
    if (scanf("%d", &n) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return n;
}

void checkN(const int n)
{
    if (n < 0)
    {
        printf("Ошибка");
        exit(1);
    }
}
