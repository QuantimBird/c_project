#include <stdio.h>
#include <assert.h>
#include <math.h>
#define EPS 0.0001



float faren(int cels)
{
    return cels * 9/5 + 32;
}

int eps(float a, float b)
{
    return fabs(a - faren(b)) < EPS;
}




int main(){
    int kek = 11;
    assert(32 == faren(0));
    printf("True %d\n", kek);
    assert(eps(33.8, faren(1)));

    return 0;
}