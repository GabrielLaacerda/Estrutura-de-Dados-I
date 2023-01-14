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
void inserir2(celula **inicio,celula ***inicio2,celula ***inicio3)
{
    celula *p;
    p = *inicio;

    int valor;

    if(*inicio == NULL)
    {
        printf("\nLista Vazia\n");
    }
    else
    {
        while(p)
        {
            valor = p->dados;

            if(p->dados > 0)
            {

                inserir_lista(&(*inicio2),valor);
            }
            else
            {
                inserir_lista(&(*inicio3),valor);
            }

            p = p->prox;

        }
    }

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

        while(p)
        {
            printf("%d ",p->dados);
            p = p->prox;

        }
    }
    printf("\n");

}


