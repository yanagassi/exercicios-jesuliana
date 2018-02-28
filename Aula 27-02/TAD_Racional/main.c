#include <stdio.h>
#include <stdlib.h>

int main()
{
    Racional r1,r2,r3;
    int numerador, denominador;
    printf("Numerador");
    scanf("%d", &numerador);
    printf("Denominador");
    scanf("%d", &denominador);
    r1 = cria(numerador, denominador);
    printf("Numerador");
    scanf("%d", &numerador);
    printf("Denominador");
    scanf("%d", &denominador);
    r2 = cria(numerador, denominador);
    r3 = multiplica(r1,r2);
    printf("%d/%d* %d/%d = %d/%d\n", r1.num, r1.den, r2.num,r2.den,r3.num,r3.den);
    if(testaIgualdade(r1,r2));  printf("Numero Igual");
    else    printf(" numeros diferetes");
    return 0;
}
