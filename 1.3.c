#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет расстояние между шарами по закону всемирного тяготения
 * @param m_tonnes Масса шаров в тоннах
 * @param f_coeff Коэффицент силы F
 * @return double Расстояние между шарами в метрах
 */
double calculate_distance(double m_tonnes,double f_coeff) 
{
    const double G = 6.6743e-11;// Гравитационная постоянная
    // Перевод в систему СИ (тонны в кг, F*10^-5 в Н)
    double m_kg = m_tonnes * 1000.0;
    double force = f_coeff * 1e-5;
    // Вычисление расстояния по формуле закона всемирного тяготения
    double distance = sqrt((G * m_kg * m_kg) / force);
    return distance;
}
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() 
{
    double m_tonnes=0.0;
    double f_coeff=0.0;

    printf("Введите массу шаров в тоннах (m): \n ");
    scanf("%lf", &m_tonnes);

    printf("Введите коэффициент силы F: \n");
    scanf("%lf", &f_coeff);

    // вызов функции для расчёта
    double distance = calculate_distance(m_tonnes,f_coeff);
    printf("Расстояние между шарами: %.4f м\n", distance);

    return 0;
}
