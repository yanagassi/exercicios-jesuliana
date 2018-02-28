#ifndef RACIONAL_H_INCLUDED
#define RACIONAL_H_INCLUDED

/* Tipo Exportado */
typedef struct racional{
 int num, den;
}Racional;

Racional cria(int N, int D); // Gera um n�mero racional a partir de dois inteiros, sendo o segundo n�o nulo
Racional multiplica(Racional R1, Racional R2); /* Multiplica dois n�meros racionais R1 e R2 */
int testaIgualdade(Racional R1, Racional R2); /* Verifica se 2 n�meros racionais R1 e R2 sao iguais */

#endif // RACIONAL_H_INCLUDED
