#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * @brief Считывает и проверяет положительное вещественное число с клавиатуры.
 * @return Считанное значение.
 */
double getPositiveDouble();

/**
 * @brief Точка входа в программу.
 * @return 0, если программа выполнена корректно, иначе не 0.
 */
int main()
{

    printf("Введите размеры участка (a и b):\n");
    double a = getPositiveDouble();
    double b = getPositiveDouble();

    printf("Введите размеры первого дома (p и q):\n");
    double p = getPositiveDouble();
    double q = getPositiveDouble();

    printf("Введите размеры второго дома (r и s):\n");
    double r = getPositiveDouble();
    double s = getPositiveDouble();

    // Проверяем, помещаются ли оба дома поодиночке 
    int house1_fits = ((p <= a && q <= b) || (p <= b && q <= a));
    int house2_fits = ((r <= a && s <= b) || (r <= b && s <= a));

    if (!house1_fits || !house2_fits)
    {
        printf("Дома не могут быть размещены (один из домов больше участка).\n");
        return 0;
    }
    
    // Перебираем возможные ориентации домов
    bool placed = false;

    // Вариант А: оба дома ориентированы стандартно (p x q и r x s)
    if ((p + r <= a && (q <= b && s <= b)) || ((p <= a && r <= a) && q + s <= b))
    {
        placed = true;
    }
    // Вариант Б: первый стандартно, второй повернут
    else if ((p + s <= a && (q <= b && r <= b)) || ((p <= a && s <= a) && q + r <= b))
    {
        placed = true;
    }
    // Вариант В: первый повернут, второй стандартно
    else if ((q + r <= a && (p <= b && s <= b)) || ((q <= a && r <= a) && p + s <= b))
    {
        placed = true;
    }
    // Вариант Г: оба дома повернуты 
    else if ((q + s <= a && (p <= b && r <= b)) || ((q <= a && s <= a) && p + r <= b))
    {
        placed = true;
    }

    if (placed)
    {
        printf("Оба дома могут быть размещены на участке.\n");
    }
    else
    {
        printf("Дома не могут быть размещены (не хватает места при параллельном расположении).\n");
    }

    return 0;
}

double getPositiveDouble()
{
    double value = 0;
    if (scanf("%lf", &value) != 1 || value <= 0)
    {
        printf("Ошибка ввода\n");
        exit(1);
    }
    return value;
}
