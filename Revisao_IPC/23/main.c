#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mat[6][4], i, j, cont=0;
        for(i=0;i<6;i++){
            for(j=0;j<4;j++){
                printf("Digite sua matriz de linha %d e coluna %d : ", i+1, j+1);
                scanf("%d", &mat[i][j]);
                if(mat[i][j]>30){
                    cont++;
                }
            }
        }
        printf("A quantidade de numeros na matriz de valor acima de 30 sao: %d\n", cont);
        for(i=0; i<6; i++){
            for(j=0; j<4; j++){
                if(mat[i][j]>=30){
                    mat[i][j] = 0;
                }
            }
        }
        printf("A matriz com todos os numeros maiores que 30 substituidos por 0 eh:\n");
        for(i=0;i<6;i++){
            for(j=0;j<4;j++){
                printf("%d\t", mat[i][j]);
            }
            printf("\n");
        }

    return 0;
}
