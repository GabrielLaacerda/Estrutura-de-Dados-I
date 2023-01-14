#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, valor;

        printf("Digite o tamanho de seu vetor\n");
        scanf("%d", &tamanho);
        if(tamanho>100){
            printf("O vetor deve ser de no maximo 100 posicoes\n");
            do{
                scanf("%d", &tamanho);
            }while(tamanho>100);
        }
        int vet[tamanho], i, j, k;

        printf("digite seus valores\n");
        for(i=0; i<tamanho; i++){
            scanf("%d", &vet[i]);
        }
        for(i = 0; i < tamanho; i++ )
        {
            for(j = i + 1; j < tamanho;)
            {
                if( vet[j] == vet[i] )
                {
                    for( k = j; k < tamanho; k++ )
                        vet[k] = vet[k + 1];

                    tamanho--;
                }
                else
                {
                    j++;
                }
            }
        }
        printf("Digite qual valor devera ser removido do vetor:");
        scanf("%d", &valor);

        int ultimo = vet[i];

        i=0;
        while(vet[i]!= ultimo){
            if(vet[i]==valor){
                vet[i] = vet[i+1];

            if(vet[i]!=ultimo){
                vet[i+1] = valor;
            }
            }
            i++;
        }
        for(i=0; vet[i]!=ultimo; i++){
            printf("%d\t", vet[i]);
        }
    return 0;
}
