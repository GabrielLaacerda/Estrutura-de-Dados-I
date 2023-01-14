#include <stdio.h>
#include <stdlib.h>

void tamanho(char p1[],char p2[],char p3[],char p4[])
{
    int tam1=0,tam2=0,tam3=0,tam4=0;
    int vet[4];
    int aux;

    for(int i=0; p1[i]!='\0'; i++)
    {
        tam1++;
    }
    for(int i=0; p2[i]!='\0'; i++)
    {
        tam2++;
    }
    for(int i=0; p3[i]!='\0'; i++)
    {
        tam3++;
    }
    for(int i=0; p4[i]!='\0'; i++)
    {
        tam4++;
    }

    vet[0] = tam1 -1;
    vet[1] = tam2 -1;
    vet[2] = tam3 -1;
    vet[3] = tam4 -1;

    int maior = vet[0];
    int result = 0;

    for(int i=0; i<4; i++)
    {
        if(vet[i] > maior)
        {
            result = i;
        }
    }
   printf("A maior palavra eh a %d, ",result+1);

    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(vet[i] > vet[j])
            {
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }

    }
    printf("ela possui %d letras\n",vet[3]);

}

int main()
{
    char p1[20], p2[20], p3[20], p4[20];

    printf("Digite 4 palavras:\n");

    fgets(p1,20,stdin);
    fgets(p2,20,stdin);
    fgets(p3,20,stdin);
    fgets(p4,20,stdin);

    tamanho(p1,p2,p3,p4);

    return 0;
}
