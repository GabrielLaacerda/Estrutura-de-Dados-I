#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matA[10][20], i, j, aux, vet[10];
    for(i=0; i<10; i++)
    {
        for(j=0; j<20; j++)
        {
            printf("Digite o valor de matA[%d][%d]:", i+1, j+1);
            scanf("%d", &matA[i][j]);
        }
    }
    for(i=0; i<10; i++)
    {
        aux=0;
        for(j=0; j<20; j++)
        {
            aux = aux + matA[i][j];
            vet[i] = aux;
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<20; j++)
        {
            matA[i][j] * vet[i];
            printf("%d\t", matA[i][j]);
        }
        printf("\n");
        }

    return 0;
}
