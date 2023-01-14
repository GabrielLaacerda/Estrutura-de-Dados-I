#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100];
    int  n, i, j, flag, aux;

    printf("QUANTOS NUMEROS DESEJA LER ? ");
    scanf("%d", &n);

    printf("DIGITE OS NUMEROS:\n\n");

    for (i = 0; i < n; i++)
    {
        printf("->Num %d: ",i+1);
        scanf("%d",&vetor[i]);

    }

    printf("\nVETOR DESDORDENADO:\n");

    for(int l=0; l<n; l++)
    {

        printf("%d ",vetor[l]);

    }

    for(i = 0; i < n - 1; i++)
    {
        flag=i;

        for(j = i + 1; j < n; j++)
        {
            if(vetor[flag] > vetor[j])
                flag=j;
        }
        if(flag != i)
        {
            aux=vetor[i];
            vetor[i]=vetor[flag];
            vetor[flag]=aux;
        }
    }
    printf("\n\nVETOR ORDENADO:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);

    }

    printf("\n");


    return 0;
}
