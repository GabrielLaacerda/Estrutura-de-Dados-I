#include <stdio.h>
#include <stdlib.h>

int main()
{
      float vetor[10],vetor2[10];
       int x=0;

       printf("Digite 10 numeros para o primeiro vetor:\n");

       for(int i=0;i<10;i++){
        scanf("%f",&vetor[i]);
       }
       for(int i=9;i>=0;i--){
        vetor2[x]=vetor[i];
        x++;

       }
       printf("\nVetor invertido:\n\n");

       for(int i=0;i<10;i++){
        printf("%1.f\n",vetor2[i]);
       }
       printf("\n
    return 0;
}
