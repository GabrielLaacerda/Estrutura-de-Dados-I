#include <stdio.h>
#include <stdlib.h>
#include "Listas-Exercicio4.h"

//Inicializa TAD's
void iniciar(celula **inicio)
{
    (*inicio) = NULL;
}

void inserir(celula **inicio)
{
    celula *p;
    int valor;

    printf("Digite o valor: ");
    scanf("%d",&valor);

    //Alocação de memoria/inserção do valor e pre-definiçao do p->prox como NULL
    p = (celula *)malloc(sizeof(celula));

    p->conteudo = valor;
    p->prox = NULL;

    //Inserção caso a Lista esteja vazia
    if(*inicio == NULL)
    {
        p->prox = NULL;
        *inicio = p;
    }
    else
    {
        //Inserção simples no final, percorrendo toda a lista
        celula *aux;
        aux = *inicio;

        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = p;
    }

}

//Função para remoçao usando uma posição dada pelo usuario
void retirar(celula **inicio, int pos)
{
    celula *p;
    p = *inicio;

    int i = 0;

    //Caso seja a posição 1
    if(pos == 1)
    {
        //Se só existir um valor, libera o ponteiro auxiliar e aponta o inicio para NULL
        if(p->prox == NULL)
        {
            free(p);
            *inicio = NULL;
        }
        //Se existirem mais valores, inicio aponta para o segundo e liberamos o a memoria do primeiro
        else
        {
            *inicio = p->prox;
            free(p);
        }
    }
    else{

        celula *p2;

        //Percorremos a lista ate a posição
        while(i != pos-1 ){
            p2 = p;
            p = p->prox;
            i++;
        }
        //Remoção no final
        if(p->prox == NULL){
            p2->prox = NULL;
            free(p);
        }
        //Remoção no meio
        else{
            p2->prox = p->prox;
            free(p);
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

            printf("[%d] ",p->conteudo);
            p = p->prox;
        }

    }

}

//Função para verificar se a posição esta preenchida
int existe(celula **inicio,int pos)
{
    celula *aux;
    aux = *inicio;
    int tam = 0;

    while(aux != NULL)
    {
        aux = aux->prox;
        tam++;
    }

    //Caso tam seja menor que a posição, ela nao esta preenchida
    if(tam < pos)
    {
        return -1;
    }
    else
    {
        return 0;
    }
    return 0;
}
