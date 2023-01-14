#include <stdio.h>
#include <stdlib.h>
#include "Listas-Exercicio2.h"

//Inicializa TAD's com NULL
void iniciar(celula **inicio)
{
    (*inicio) = NULL;
}

void inserir(celula **inicio)
{
    celula *p;
    char name[200];

    celula *aux,*aux2;
    aux = *inicio;
    aux2 = aux;

    //Limpeza do buffer
    fflush(stdin);
    printf("Digite o valor: ");
    gets(name);

    //Alocação de memoria/ pré definição do p->prox como NULL/inserção do valor
    p = (celula *)malloc(sizeof(celula));
    p->prox = NULL;
    strcpy(p->nome,name);

    //Caso seja o primeiro elemento, apenas inseri-lo sem comparações
    if(*inicio == NULL)
    {
        p->prox = NULL;
        *inicio = p;
    }
    //Inserção caso ja haja elementos, porem o elemento a ser inserido é menor que o primeiro
    else if(strcmp(aux->nome,p->nome) > 0)
    {
        *inicio = p;
        p->prox = aux;
    }
    else
    {
        aux = *inicio;
        aux2 = aux;

        //Percorre enquanto o elemento a ser inserido é maior que o elemento atual da lista
        //ou ainda não chegamos no final
        //Utilizamos um segundo auxiliar para permanecer sempre uma posição atras do primeiro ponteiro
        //Para nos auxiliar em inserções no meio da lista
        while(strcmp(aux->nome,p->nome) < 0 && aux->prox != NULL)
        {
            aux2 = aux;
            aux = aux->prox;
        }
        //Inserção no fim
        if(strcmp(aux->nome,p->nome) < 0){
            aux->prox = p;
        }
        //Inserção no meio
        else{
             aux2->prox = p;
             p->prox = aux;
        }
    }
}

void mostrar(celula **inicio)
{
    celula *p;

    if(*inicio == NULL)
    {
        printf("\nLista Vazia\n");
    }
    else
    {
        p = *inicio;
        while(p != NULL)
        {
            printf("[%s] ",p->nome);
            p = p->prox;
        }

    }
}
