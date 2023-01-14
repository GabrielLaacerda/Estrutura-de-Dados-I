#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nomes{

    char nome[50];

}nomes;

int main()
{
    nomes nom[5];
    int i,j;
    char aux[50];

    printf("DIGITE 5 NOMES:\n\n");

    for(int cont=0;cont<5;cont++)
    {
        printf("->Nome [%d]: ",cont+1);
        fgets(nom[cont].nome,50,stdin);
        setbuf(stdin,NULL);
    }

    printf("\nNOMES EM ORDEM ALFABETICA:\n\n");

    for(i=1;i<5;i++)
    {
        strcpy(aux,nom[i].nome);

        for(j=i;(j>0) && strcmp(nom[j-1].nome,aux) > 0; j--)
        {
            strcpy(nom[j].nome,nom[j-1].nome);

        }
            strcpy(nom[j].nome,aux);

    }

    for(int l=0;l<5;l++)
    {
        puts(nom[l].nome);

    }


    return 0;
}
