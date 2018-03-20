#include <stdio.h>
#include <stdlib.h>

typedef struct p{
    int x,y;
}Ponto;

void preenche(Ponto p[])
{
    int i;
    for(i=0;i<2;i++)
    {
      scanf("%d %d", &p[i].x, &p[i].y); //escaniando p.x e p.y
    }
}

void printa(Ponto p[])
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nPonto %d x: %d", i,p[i].x); //printa
        printf("\nPonto %d y: %d", i,p[i].y);
    }
}
int main() //Passando estrutura de um vetor com struct
{
    Ponto p1[2];
    preenche(&p1);
    printa(&p1);
    return 0;
}
