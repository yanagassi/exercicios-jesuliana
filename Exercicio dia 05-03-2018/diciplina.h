#ifndef DICIPLINA_H_INCLUDED
#define DICIPLINA_H_INCLUDED

//Cria uma strutura para aluno
typedef struct aluno{
    char nome[20];
    char matricula[8];
    char turma;
    float notas[3];
}alunos;

//Define o nome das funções e seus paramentros
void preenche(alunos diciplina[], int tam);
void imprime(alunos diciplina[], int tam);
float mediaFinal(alunos diciplina[], char turma, int tam);



#endif // DICIPLINA_H_INCLUDED
