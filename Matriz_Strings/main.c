#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct palavras
{
    char valor[50];

} pa;

int compara(int cont,char teste[][50],int vet[],int n)
{
    char aux[50];
    int t;
    int recebe = cont;
    int k = 0;

    for(int i=0; i<n; i++)
    {
        strcpy(aux,teste[i]);
        t = 0;

        for(int j=0;aux[j]!='\0';j++)
        {
            t++;
        }

        if(aux[0] == aux[t-2])
        {
            recebe++;
            vet[k] = i +1;
            k++;
        }
    }

    return recebe;
}


int main()
{
    int n;
    int cont = 0;

    printf("Digite a quantidade de palavras a serem lidas: ");
    scanf("%d",&n);
    printf("\n");

    pa p[n];

    char teste[n][50];
    int vet[n];

    for(int i=0; i<n; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite a palavra[%d]: ",i+1);
        fgets(p[i].valor,50,stdin);
        setbuf(stdin,NULL);

    }
    for(int i=0; i<n; i++)
    {
        strcpy(teste[i],p[i].valor);

    }

    int total = compara(cont,teste,vet,n);

    printf("Sao %d palavras que comecam e terminam com a mesma letra\n",total);

    for(int i=0;i<total;i++){
        printf("%d\t",vet[i]);
    }



    return 0;
}
