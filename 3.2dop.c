#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Считывает целое значение с клавиатуры
 * @return Считанное значение
 */
int getInt();

/**
 * @brief Проверяет, что число является натуральным
 * @param n проверяемое число
 */
void checkNatural(const int n);

/**
 * @brief Считает количество делителей натурального числа n, больших k
 * @param n натуральное число
 * @param k заданное число
 * @return Количество подходящих делителей
 */
int count_divisors(const int n, const int k);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите натуральное число N:\n");
    int n = getInt();
    checkNatural(n);

    printf("Введите число K:\n");
    int k = getInt();

    int count = count_divisors(n, k);
    printf("Количество делителей, больших %d = %d\n", k, count);

    return 0;
}

int count_divisors(const int n, const int k)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i > k)
        {
            count++;
        }
    }
    return count;
}

int getInt()
{
    int value = 0;
    if (scanf("%d", &value) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return value;
}

void checkNatural(const int n)
{
    if (n <= 0)
    {
        printf("Ошибка");
        exit(1);
    }
}
