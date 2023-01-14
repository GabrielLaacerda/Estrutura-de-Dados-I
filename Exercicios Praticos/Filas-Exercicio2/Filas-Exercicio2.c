#include <stdio.h>
#include <stdlib.h>
#include "Filas-Exercicio2.h"

//Inicializa TAD's
void iniciar(celula **inicio)
{
    (*inicio) = NULL;
}

void inserir(celula **inicio, int valor)
{
    celula *p;

    //Alocação de memoria
    p = (celula *)malloc(sizeof(celula));

    p->conteudo = valor;
    p->prox = NULL;

    //Se a fila estiver vazia, insere sem outras comparações
    if(*inicio == NULL)
    {
        *inicio = p;
    }
    else
    {
        //Inserção simples no final

        celula *aux;
        aux = *inicio;

        while(aux->prox != NULL){
           aux = aux->prox;
        }

        aux->prox = p;
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

//Função para intercalar as Filas
void intercalar(celula **inicio, celula **inicio2, celula **inicio3){

    //Recebemos as duas filas, e a fila resultado
    celula *aux,*aux2;
    aux = *inicio;
    aux2 = *inicio2;

    //Percorremos as duas enquanto houver elementos em pelo menos 1 delas
    while(aux != NULL || aux2 != NULL){

        //Inserimos de maneira intercalada na fila 3
        if(aux != NULL){
            inserir(&(*inicio3),aux->conteudo);
            aux = aux->prox;
        }
        if(aux2 != NULL){
            inserir(&(*inicio3),aux2->conteudo);
            aux2 = aux2->prox;
        }
    }
    printf("\nLista 1: ");
    mostrar(&(*inicio));
    printf("\nLista 2: ");
    mostrar(&(*inicio2));
    printf("\nLista 3: ");
    mostrar(&(*inicio3));
    printf("\n");
    system("pause");
}
