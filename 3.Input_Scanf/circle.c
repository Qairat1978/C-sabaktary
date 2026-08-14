#include <stdio.h>

int main() {

    // 1. Variables
    float radius;
    float area;
    float circumference;
    const float PI=3.1415;

    // 2. User-ден радиусты алу
    printf("Shenberdin radiusyn  kiriniz: ");
    scanf("%f", &radius);

    // 3. Формулалар
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // 4. Нәтижені шығару
    printf("Shenberdin  alani: %f\n", area);
    printf("Senberdin perimetri: %f\n", circumference);

    return 0;
}