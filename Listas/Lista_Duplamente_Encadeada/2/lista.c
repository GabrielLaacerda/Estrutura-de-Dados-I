#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criar_lista(celula **inicio)
{
    *inicio = NULL;
}

void inserir_lista(celula **inicio, float valor,char name[])
{
    celula *p;

    p = (celula *)malloc(sizeof(celula));

    if(!p)
    {
        printf("\nSem Memoria\n");

    }

    p->nota = valor;
    strcpy(p->nome,name);

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

int quant(celula *inicio)
{
    int total = 0;

    celula *p = NULL;
    p = inicio;

    if(inicio == NULL)
    {
        printf("\n**NENHUM ALUNO CADASTRADO**\n");

    }
    else
    {
        while(p!=NULL)
        {
            if(p->nota >= 7)
            {
                total++;

            }

            p = p->prox;

        }
    }

    return total;

}

void aprovados(celula *inicio,int total)
{
    celula *p;
    p = inicio;

    if(total == 0)
    {
        printf("\n**NAO HOUVERAM ALUNOS APROVADOS**\n");
    }
    else
    {
        system("cls");
        printf("---------ALUNOS APROVADOS---------\n\n");
        while(p!=NULL)
        {
            if(p->nota >= 7.0)
            {
                printf("Nome: %sNota: %.1f\n\n",p->nome,p->nota);

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
            printf("%f  ",p->nota);
            puts(p->nome);
            p = p->prox;

        }
    }
    printf("\n");

}

