#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[50];

        for(int i=0;i<50;i++){
            printf("Digite um numero:");
            scanf("%d",&vetor[i]);
        }
        for(int i=0;i<50;i++){
            if(vetor[i]>=0){
                printf("%d\n",vetor[i]);
            }
        }

    return 0;
}
