#include <stdio.h>
#include <stdlib.h>

int soma(int vet[],int n)
{
    int acm = 0;

    for(int i=0;i<n;i++)
    {
        if(vet[i]%2==0)
        {
            acm+=vet[i];
        }

    }

    return acm;
}

int main()
{
    int vet[10];

    printf("Digite 10 numeros:\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d",&vet[i]);

    }

    int total = soma(vet,10);

    printf("O total eh %d\n",total);

    return 0;
}
