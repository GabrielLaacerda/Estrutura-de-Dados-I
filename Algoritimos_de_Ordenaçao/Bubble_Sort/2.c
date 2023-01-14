#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int aux;

    printf("Digite 10 valores:\n\n");

    for(int i=0; i<10; i++)
    {
        printf("Num %d: ",i+1);
        scanf("%d",&vet[i]);

    }

    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(vet[j] < vet[i])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;

            }
        }
    }

    printf("\nVetor Ordenado (bubble sort): \n\n");

    for(int i=0; i<10; i++)
    {
        printf("%d ",vet[i]);
    }

    printf("\n");

    return 0;
}
