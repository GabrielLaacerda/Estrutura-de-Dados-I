#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,acm;

       printf("Digite a quantidade de valores desejados:");
       scanf("%d",&n);

       int vetor[n];

       printf("Digite o valor:\n");
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&vetor[i]);
            printf("O numero lido foi:%d\n",vetor[i]);

            for(acm = 1; vetor[i] > 1; vetor[i]--)
            {
                acm = acm * vetor[i];

            }

        printf("Seu fatorial e:%d\n", acm);
    }


    return 0;
}
