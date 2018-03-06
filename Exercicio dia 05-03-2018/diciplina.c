#include <stdio.h>
#include <stdlib.h>
#include "diciplina.h"

void preenche(alunos diciplina[], int tam){
    int i,j;
    for(i=0;i<tam;i++)
    {
        printf("Digite o nome do aluno %i", i);
        gets(diciplina[i].nome);
        printf("Digite a matricula do aluno %i", i);
        gets(diciplina[i].matricula);
        printf("Digite o tuma do aluno %i", i);
        gets(diciplina[i].turma);
        for(j=0;j<3;j++)
        {
            printf("Digite o nota %d do aluno %i",j, i);
            scanf("%d", &diciplina[i].notas[j]);
        }
        getchar();
    }
}

void imprime(alunos diciplina[], int tam){
    int i,j;
    for(i=0;i<tam;i++)
    {
        printf("Nome: %d: %s\n", diciplina[i].nome);
        printf("Matricula: %s\n", diciplina[i].matricula);
        printf("Turma: %s\n", diciplina[i].turma);
        for(j=0;j<3;j++)
        {
            printf("Nota %d:%.2f", j, diciplina[i].notas[j]);
        }
    }
}


float mediaFinal(alunos diciplina[], char turma, int tam)
{
    float soma = 0;
    int i,j,count;
    count=0;
    float somaT, somaA;
    for(i=0;i<tam;i++)
    {
        if(diciplina[i].turma == turma)
        {
            for(j=0;j<3;j++)
            {
                soma = diciplina[i].notas[j] + soma;
            }
        }
        somaT = somaT+(somaA/3.0);
        count ++;
    }
    return soma/count;
}
