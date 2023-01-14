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
        printf("\nPilha vazia\n");

    }

    printf("\n");
}

int main()
{
    int x,num;
    fila p;

    iniciar(&p);

    printf("Digite quants numeros deseja adicionar: ");
    scanf("%d",&num);

    for(int i=0; i<num; i++)
    {
        printf("Numero [%d]: ",i+1);
        scanf("%d",&x);

        if(x > 10)
        {
            inserir(&p,x);
        }
        else{
            printf("----Digite um numero maior que 10----\n");
            i--;
        }

    }

    mostrar(p);




    return 0;
}

