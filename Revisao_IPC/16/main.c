#include <stdio.h>
#include <stdlib.h>

int main()
{
     float vetor[10],vetor2[10],vetor3[10];

        printf("Digite 10 numeros para o primeiro vetor:\n");

        for(int i=0;i<10;i++){
          scanf("%f",&vetor[i]);
        }
        printf("Digite 10 numeros para o segundo vetor:\n");

        for(int i=0;i<10;i++){
          scanf("%f",&vetor2[i]);
        }
        for(int i=0;i<10;i++){
          vetor3[i]=vetor[i]+vetor2[i];
        }
        printf("Terceiro vetor:\n");

        for(int i=0;i<10;i++){
          printf("%.1f\n",vetor3[i]);
        }

    return 0;
}
