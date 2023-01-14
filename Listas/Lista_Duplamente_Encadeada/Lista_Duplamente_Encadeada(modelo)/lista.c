#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void criar_lista(celula **inicio)
{
    *inicio = NULL;
}
void remove_lista(celula **inicio)
{
    celula *p;

    if(*inicio == NULL)
    {
        printf("\nLista Vazia\n");
        return;

    }
    else
    {
        p = (*inicio);

        printf("\nValor removido: [%d]\n",p->dados);

        *inicio = p->prox;

        if(*inicio!=NULL)
        {
            (*inicio)->ant = NULL;

        }
        free(p);

    }

}
void inserir_lista(celula **inicio, int valor)
{
    celula *p;

    p = (celula *)malloc(sizeof(celula));

    if(!p)
    {
        printf("\nSem Memoria\n");

    }

    p->dados = valor;
    p->ant = NULL;

    if(*inicio == NULL)
    {
        p->prox = NULL;

    }
    else
    {
        p->prox = *inicio;
        (*inicio)->ant = p;

    }

    *inicio = p;

}
void listar(celula *inicio)
{
    if(inicio == NULL)
    {
        printf("\nLista Vazia\n");

    }
    else
    {

        celula *p;
        p = inicio;

        printf("Lista: ");

        while(p)
        {
            printf("%d ",p->dados);
            p = p->prox;

        }
    }
    printf("\n");

}

int menu()
{
    int op;

    printf("Menu - Digite a opçao desejada\n\n");
    printf("->1-Inserir elemento\n");
    printf("->2-Remover elemento\n");
    printf("->3-Listar todos\n");
    printf("->4-Sair\n");

    scanf("%d",&op);

    return op;

}
