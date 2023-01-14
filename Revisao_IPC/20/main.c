#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], i, aux=0, j;

    printf("Digite um vetor de 10 posicoes\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &vet[i]);
        for(j=i+1; j<10; j++)
        {
            if(vet[i]==vet[j])
            {
                i--;
                printf("O numero ja foi digitado anteriormente\n");
                do
                {
                    printf("Digite um numero diferente\n");
                    scanf("%d", &vet[i]);
                }
                while(vet[i]==vet[j]);
            }
        }
    }

    return 0;
}
