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

    //Aloca��o de memoria/ pr� defini��o do p->prox como NULL/inser��o do valor
    p = (celula *)malloc(sizeof(celula));
    p->prox = NULL;
    strcpy(p->nome,name);

    //Caso seja o primeiro elemento, apenas inseri-lo sem compara��es
    if(*inicio == NULL)
    {
        p->prox = NULL;
        *inicio = p;
    }
    //Inser��o caso ja haja elementos, porem o elemento a ser inserido � menor que o primeiro
    else if(strcmp(aux->nome,p->nome) > 0)
    {
        *inicio = p;
        p->prox = aux;
    }
    else
    {
        aux = *inicio;
        aux2 = aux;

        //Percorre enquanto o elemento a ser inserido � maior que o elemento atual da lista
        //ou ainda n�o chegamos no final
        //Utilizamos um segundo auxiliar para permanecer sempre uma posi��o atras do primeiro ponteiro
        //Para nos auxiliar em inser��es no meio da lista
        while(strcmp(aux->nome,p->nome) < 0 && aux->prox != NULL)
        {
            aux2 = aux;
            aux = aux->prox;
        }
        //Inser��o no fim
        if(strcmp(aux->nome,p->nome) < 0){
            aux->prox = p;
        }
        //Inser��o no meio
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
