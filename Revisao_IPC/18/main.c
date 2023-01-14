#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],vetor2[10],vetor3[20];

     printf("Digite os valores para o vetor 1:\n");

     for(int i=0;i<10;i++){
        scanf("%d",&vetor[i]);
     }

     printf("\nDigite os valores para o vetor 2:\n");
      for(int i=0;i<10;i++){
        scanf("%d",&vetor2[i]);
     }
      for (int i=0; i<10;i++) {
        vetor3[i*2] = vetor[i];
    }
    for (int i=0;i<10;i++) {
        vetor3[i*2+1]=vetor2[i];
    }

    printf("Vetor 3:\n");
    for (int i=0;i<20;i++) {
        printf("%d\n",vetor3[i]);
    }

    return 0;
}
