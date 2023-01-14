#include <stdio.h>
#include <stdlib.h>

int main()
{
     int vetor[6],vetor2[6],vetor3[6],x=0,l=0;

        printf("Digite 6 numeros inteiros:\n");

        for(int i=0; i<6; i++)
        {
            scanf("%d",&vetor[i]);

            if(vetor[i]%2==0)
            {
                vetor2[x]=vetor[i];
                x++;
            }
            else if(vetor[i]%2==1)
            {
                vetor3[l]=vetor[i];
                l++;
            }
        }
        printf("\n");
        printf("Quantidade de numeros pares:%d\n",x);
        printf("Quantidade de numeros impares:%d\n\n",l);
        printf("Numeros pares:\n");
        for(int i=0; i<x; i++)
        {
            printf("%d\n",vetor2[i]);
        }
        printf("Numeros impares:\n");
        for(int i=0; i<l; i++)
        {
            printf("%d\n",vetor3[i]);
        }

    return 0;
}
