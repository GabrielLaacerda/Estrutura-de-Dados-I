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

        return -1;


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

        printf("\nImpossivel excluir,Fila vazia!\n");
        return 0;

    }

}

void mostrar(fila p)
{
    int aux;

    if(p.inicio != p.fim)
    {
        while(p.inicio != p.fim)
        {

            remover(&p,&aux);
            printf("%d ",aux);
        }

    }
    else
    {
        printf("Pilha vazia");

    }

    printf("\n");
}

int main()
{
    int x,num,aux;

    fila p;
    iniciar(&p);

    fila p2;
    iniciar(&p2);

    fila p3;
    iniciar(&p3);

    printf("Quantos numeros deseja ler: ");
    scanf("%d",&x);

    for(int i=0; i<x; i++)
    {
        printf("Numero[%d]: ",i+1);
        scanf("%d",&num);

        inserir(&p,num);

    }

    for(int i=0; p.inicio!=p.fim; i++)
    {
        if(p.item[p.inicio]<100)
        {
            remover(&p,&aux);
            inserir(&p2,aux);
        }
        else
        {
            remover(&p,&aux);
            inserir(&p3,aux);

        }

    }

    printf("\nFila 1: ");
    mostrar(p);
    printf("\nFila 2: ");
    mostrar(p2);
    printf("\nFila 3: ");
    mostrar(p3);
    printf("\n");




    return 0;
}
