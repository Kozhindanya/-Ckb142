#include <stdio.h>
#include <math.h>
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
* @brief Переводит длину из сантиметров в дюймы (1 дюйм = 2.5 см)
* @param cm Длина в сантиметрах
* @return Длина в дюймах
*/
double convertToInches(const double cm);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double centimeters = getDouble();
    printf("Length in inches is %.2f\n", convertToInches(centimeters));
    return 0;
}
//функция для перевода сантиметров
double convertToInches(const double cm)
{
    return cm / 2.54;
}
double getDouble()
{
    double cm = 0.0;
    printf("Enter length in centimeters: ");
    scanf("%lf", &cm);
    return cm;
}
