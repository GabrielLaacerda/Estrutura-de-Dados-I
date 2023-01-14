#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[15][5], i, j, k=0, vet[75], cont=0, cont2=0;
    for(i=0; i<15; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("Digite sua matriz de linha %d e coluna %d : ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i<15; i++)
    {
        for(j=0; j<5; j++)
        {
            vet[k] = mat[i][j];
            k++;
        }
    }
    for(i = 0; i < 75; i++ )
    {
        for(j = i + 1; j < 75;)
        {
            if( vet[j] == vet[i] )
            {
                cont++;
                for( k = j; k < 75; k++ )
                    vet[k] = vet[k];

                //75--;
                cont2 ++;
            }
            else
            {
                j++;
            }
        }
    }
    printf("A quantidade de elementos que se repetem eh: %d\n", cont);
    printf("Os elementos que se repetem sao:\n");
    for(i=0; i<cont2; i++)
    {
        printf("%d\t", vet[i]);
    }

    return 0;
}
