#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,a,b,maior,menor;

    printf("Digite o tamanho do seu vetor:");
    scanf("%d",&x);

    printf("Digite uma variavel min e uma max:\n");
    scanf("%d %d",&a,&b);

    vetor(x,a,b,&maior,&menor);

    printf("Maior = %d\nMenor = %d",maior, menor);


}
void vetor(int tamanho, int max, int min, int *maior, int *menor)
{
    int vet[tamanho];

    for(int i = 0; i<tamanho; i++)
    {
        vet[i] = min + (rand() % max);

    }

    *maior = vet[0];
    *menor = vet[0];

    for(int i = 1; i<tamanho; i++)
    {
        if(vet[i]>*maior){
            *maior = vet[i];
        }
       else if(vet[i]<*menor){
            *menor = vet[i];
        }
    }


    return 0;
}
