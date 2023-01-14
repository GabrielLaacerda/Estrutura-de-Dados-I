#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct Fila
{
    int item[MAX];
    int inicio,fim;

} fila;

void iniciar(fila *p)
{
    (*p).inicio = 0;
    (*p).fim = 0;

}
int  inserir(fila *p,int x)
{

    if((*p).fim == MAX)
    {
        printf("\n\nImpossivel inserir,fila cheia\n");

        return 0;
    }
    else
    {
        (*p).item[(*p).fim] = x;
        (*p).fim++;

        return 1;


    }
}

int remover(fila *p, int *x)
{

    if((*p).fim != (*p).inicio)
    {
        *x = (*p).item[(*p).inicio];
        for(int i=0; i<(*p).fim; i++)
        {
            (*p).item[i] = (*p).item[i+1];
        }

        (*p).fim--;

        return 1;
    }
    else
    {

        printf("\nImpossivel excluir,Fila vazia!\n\n");
        return 0;

    }

}

void mostrar(fila p)
{
    int aux;

    printf("\n");

    if(p.inicio != p.fim)
    {
        while(p.inicio != p.fim)
        {

            remover(&p,&aux);
            printf("[%d] ",aux);
        }

    }
    else
    {
        printf("\nPilha vazia\n");

    }

    printf("\n");

}

int menu()
{

    int x;

    printf("Digite a opcao desejada:\n\n");
    printf("1-Inserir elemento\n");
    printf("2-Remover elemento\n");
    printf("3-Mostrar elemento do inicio\n");
    printf("4-Mostrar elemento do final\n");
    printf("5-Quantos elementos a fila possui\n");
    printf("6-Mostrar todos os elementos\n");
    printf("0-Sair\n");

    scanf("%d",&x);

    return x;


}

int main()
{
    fila p;

    iniciar(&p);

    int num;
    int aux,ez;
    int op,j;

    do
    {
        op = menu();

        switch(op)
        {
        case 1:
            printf("\n->Digite um numero: ");
            scanf("%d",&num);

            ez = inserir(&p,num);

            if(ez == 1)
            {
                printf("Numero adicionado com sucesso\n\n");
            }

            break;

        case 2:

            ez = remover(&p,&aux);

            if(ez == 1)
            {
                printf("Numero [%d] removido com sucesso\n",aux);
            }

            break;

        case 3:

            if(p.inicio == p.fim)
            {
                printf("\nFila esta vazia\n\n");
            }
            else
            {
                printf("\nInicio: [%d]\n\n",p.item[0]);
            }

            break;

        case 4:

            if(p.inicio == p.fim)
            {
                printf("\nFila esta vazia\n\n");
            }
            else
            {
                printf("\nFim [%d]\n\n",p.item[(p.fim) -1 ]);
            }
            break;

        case 5:

            j = 0;

            while(j < p.fim)
            {
                j++;
            }

            printf("\nTotal de elementos: %d\n\n",j);

            break;

        case 6:

            mostrar(p);

            break;

        case 0:

            break;

        }

    }
    while(op!=0);














    return 0;
}
