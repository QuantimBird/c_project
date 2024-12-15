#include <stdio.h>
#define M_PI 3.14159265358979332846
#include <math.h>

int main()
{
    double 
         a, // угол к горизонту в ГРАДУСАХ под которым бросили     
        v0, // начальная скорость тела м/с 
        g = 9.81, // ускорение свободного падения
        xxh; // масимальная высота подъема тела
    
    scanf("%lf", &a);
    scanf("%lf", &v0);

    double arad = a * (M_PI / 180.0);
    xxh = (v0 * v0 * sin(arad) * sin(arad) / (2 * g));

    printf("%lf \n", xxh);

    return 0;

}