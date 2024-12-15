#include <stdio.h>

float foo(float x) //Создаем функцию возвращающая данные типа FLOAT
{
    return x*x + 2*x + 3;
}

int main()
{
    float z, a = 3;
    z = foo(a+2); //в функцию передаётся не 3 а 5

    printf("%f \n", z);

    return 0;
}