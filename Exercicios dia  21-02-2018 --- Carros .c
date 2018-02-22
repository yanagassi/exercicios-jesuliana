#include <stdio.h>
#include <stdlib.h>

typedef struct dados{
    char nome[30];
    int NVEICULO , NACIDENTE;
} dados;

int main()
{
    dados dados[5];
    int i;
    int ac,count;
    for(i=0;i<5;i++)
    {
        printf("Nome: ");
        getchar();
        gets(dados[i].nome);
        printf("NVEICULO: ");
        scanf("%d",&dados[i].NVEICULO);
        printf("NACIDENTE: ");
        scanf("%d", &dados[i].NACIDENTE);
    }
    for(i=0;i<5;i++)
    {
        ac = dados[i].NACIDENTE;
        if(dados[i].NACIDENTE >= ac)
        {
            ac = dados[i].NACIDENTE;
            count = i;
        }
    }
    printf("Maior estado: ");
    puts(dados[count].nome);
    printf("Estados: \n");
    for(i=0;i<5;i++)
    {

        puts(dados[i].nome);
        printf(" - %d", dados[i].NVEICULO);
    }

    return 0;
}
