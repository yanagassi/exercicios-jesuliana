#include <stdio.h>
#include <stdlib.h>

typedef struct p{
    int x,y;
}Ponto;
int main()
{
    Ponto p1, *p;   //Declaração de Ponteiro
    //Atribuição do valor direto
    p1.x=5;
    p1.y=6;
    p=&p1.y;            //Passando struct por parametro para o ponteiro.

    printf("%d",*p);    //printa
    return 0;
}
