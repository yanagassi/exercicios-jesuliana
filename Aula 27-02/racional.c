#include "racional.h"
#include <stdio.h>
#include <stdlib.h>

Racional cria(int N, int D){
 Racional r;
 r.num = N;
 if (D!=0) r.den = D;
 return r;
}
Racional multiplica(Racional R1, Racional R2){
 Racional r;
 r.num = R1.num*R2.num;
 r.den = R1.den*R2.den;
 return r;
}
int testaIgualdade(Racional R1, Racional R2){
 if ((R1.num == R2.num) && (R1.den==R2.den)) return 1;
 else return 0; }
