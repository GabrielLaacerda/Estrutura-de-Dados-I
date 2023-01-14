#include <stdio.h>
#include <stdlib.h>
#include "Filas-Exercicio1.h"

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

    //Alocação de memoria/inserção do valor e pre-definição de p->prox para NULL
    p = (celula *)malloc(sizeof(celula));

    p->conteudo = valor;
    p->prox = NULL;

    //Inserção com lista vazia
    if(*inicio == NULL)
    {
        *inicio = p;
    }
    else
    {
        //inserção simples no final
        celula *aux;
        aux = *inicio;

        while(aux->prox != NULL){
           aux = aux->prox;
        }

        aux->prox = p;
    }

}

//Remoção de uma posição digitada pelo usuario
void retirar(celula **inicio, int pos)
{
    celula *p;
    p = *inicio;

    int i = 0;

    //Caso seja a primeira posição
    if(pos == 1)
    {
        //Se existir somente 1 elemento, libera a memoria e aponta inicio para NULL
        if(p->prox == NULL)
        {
            free(p);
            *inicio = NULL;
        }
        //Se Existirem mais posições, apontar para a segunda posição e liberar a primeira
        else
        {
            *inicio = p->prox;
            free(p);
        }
    }
    else{

        celula *p2;

        //Percorremos a fila até a posição desejada
        while(i != pos-1 ){
            p2 = p;
            p = p->prox;
            i++;
        }
        //Remoçao no final
        if(p->prox == NULL){
            p2->prox = NULL;
            free(p);
        }
        //Remoçao no meio
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

//Função para verificar se posição digitada ja esta preenchida
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

    //Se tam for menor que a posição, aquela posição nao esta preenchida
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
