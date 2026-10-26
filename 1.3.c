#include <stdio.h>
#include <math.h>

int main() 
{
    // Гравитационная постоянная
    const double G = 6.6743e-11;
    double m_tonnes;
    double f_coeff;

    
    printf("Введите массу шаров в тоннах (m): \n ");
    scanf("%lf", &m_tonnes);

    printf("Введите коэффициент силы F: \n");
    scanf("%lf", &f_coeff);

    // Перевод в систему СИ (тонны в кг, F*10^-5 в Н)
    double m_kg = m_tonnes * 1000.0;
    double force = f_coeff * 1e-5;

    // Вычисление расстояния по формуле закона всемирного тяготения
    double distance = sqrt((G * m_kg * m_kg) / force);

    
    printf("Расстояние между шарами: %.4f м\n", distance);

    return 0;
}
