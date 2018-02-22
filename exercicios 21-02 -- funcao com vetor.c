#include <stdio.h>
#include <stdlib.h>


void calc(int matriz[3][4])
{
    int i,j,a;
    int vet[12];
    a=0;
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("matriz[%d][%d]", i+1,j+1);
            scanf("%d",&matriz[i][j]);

        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            vet[a] = matriz[i][j];
            a++;
        }
    }

    for(i=0;i<12;i++)
    {
        printf("%d", vet[i]);
    }
}
int main()
{

    int matriz[3][4];
    calc(matriz);
    return 0;
}
