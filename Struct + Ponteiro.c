#include <stdio.h>
#include <stdlib.h>

typedef struct p{
    int x,y;
}Ponto;

void preenche(Ponto *p) //Passando Ponteiro por parametro
{
    scanf("%d %d",&p->x,&p->y); // Scaniando a composição de P
}

void printa(Ponto *p)  //Printa Ponto e seus componetes (x,y)
{
    printf("Ponto P.x = %d, Ponto P.y = %d", p->x,p->y);
}
int main()
{
    Ponto p1;   //Declaração de Ponteiro
    preenche(&p1);
    printa(&p1);
    return 0;
}
