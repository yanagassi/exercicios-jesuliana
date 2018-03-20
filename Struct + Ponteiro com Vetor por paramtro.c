#include <stdio.h>
#include <stdlib.h>

typedef struct p{
    int x,y;
}Ponto;

void preenche(Ponto *p) //Passando o indereço de memoria por ponteiro
{
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%d %d",&p[i].x, &p[i].y);
    }
}

void printa(Ponto *p)  //Printa Ponto e seus componetes (x,y)
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nPonto - %d P.x = %d, Ponto P.y = %d",i+1, p[i].x,p[i].y);
    }
}
int main()
{
    Ponto p1[2];   //Declaração de Ponteiro
    preenche(&p1);
    printa(&p1);
    return 0;
}
