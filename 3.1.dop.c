#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Вычисляет сумму чисел в заданном диапазоне, кратных делителю
 * @param start - начало диапазона
 * @param end - конец диапазона
 * @param divisor - число, которому должны быть кратны слагаемые
 * @return Сумма кратных чисел
 */
int calculateSum(const int start, const int end, const int divisor);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе 1
 */
int main()
{
    const int START = 3;
    const int END = 99;
    const int DIVISOR = 3;

    int result = calculateSum(START, END, DIVISOR);
    printf("Сумма чисел от %d до %d, кратных %d, равна: %d\n", START, END, DIVISOR, result);

    return 0;
}

int calculateSum(const int start, const int end, const int divisor)
{
    int sum = 0;
    for (int i = start; i <= end; i += divisor)
    {
        sum += i;
    }
    return sum;
}
