#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Перечисление для выбора операции
 */
enum Operation
{
    OP_COUNT_NEGATIVE = 1,
    OP_ABS_SUM
};
/**
 * @brief Подсчитывает количество отрицательных чисел
 * @param a первое число
 * @param b второе число
 * @param c третье число
 * @return количество отрицательных чисел
 */
int countNegative(const double a,const double b,const double c);

/**
 * @brief Вычисляет абсолютное значение суммы
 * @param a первое число
 * @param b второе число
 * @param c третье число
 * @return модуль суммы
 */
double absSum(const double a,const double b,const double c);

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
 
int main()
{
    printf("Enter a: ");
    double a = getDouble();
    
    printf("Enter b: ");
    double b = getDouble();
    
    printf("Enter c: ");
    double c = getDouble();
    
    printf("Choose operation (%d - Count negative, %d - Abs sum): ",OP_COUNT_NEGATIVE,OP_ABS_SUM);
    int choice = (int)getDouble();

    switch (choice)
    {
        case OP_COUNT_NEGATIVE:
            printf("Count of negative numbers: %d\n", countNegative(a, b, c));
            break;
        case OP_ABS_SUM:
            printf("Absolute sum: %lf\n", absSum(a, b, c));
            break;
        default:
            printf("Error");
            exit(1);
    }

    return 0;
}

int countNegative(const double a,const double b,const double c)
{
    int count = 0;
    if (a < 0) count++;
    if (b < 0) count++;
    if (c < 0) count++;
    return count;
}

double absSum(const double a,const double b,const double c)
{
    return fabs(a + b + c);
}

double getDouble()
{
    double val = 0.0;
    if (scanf("%lf",&val) != 1)
        {
            printf("Error");
            exit(1);
        }
    return val;
}

 
