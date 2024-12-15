#include <stdio.h>
#include <assert.h>

float faren(int cels)
{
    return cels * 9/5 + 32;
}

int main(){
    int cel;
    int f;


    assert(33.8 == faren(1));

    scanf("%d", &cel);
    f = faren(cel);
    printf("Температура в цельсиях %d\nТемпаретаруа в фаренгейтах %d\n", cel, f);
    return 0;
}