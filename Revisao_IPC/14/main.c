#include <stdio.h>
#include <stdlib.h>

int main()
{

    int positivos,vetor[10],j=0;
       float acm=0;

       for(int i=0;i<10;i++){
        printf("Digite um numero:");
        scanf("%d",&vetor[i]);

        if(vetor[i]<0){
            j++;
        }else if(vetor[i]>0){
          acm=acm+vetor[i];
        }
       }
       printf("Quantidade de numeros negativos:%d\n",j);
       printf("Soma dos numeros positivos:%.1f\n",acm);


    return 0;
}
