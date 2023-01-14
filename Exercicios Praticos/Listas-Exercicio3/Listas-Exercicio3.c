#include <stdio.h>
#include <stdlib.h>
#include "Listas-Exercicio3.h"

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

    //Alocação de memoria/inserção do valor e pre-definição do prox para o novo elemento
    p = (celula *)malloc(sizeof(celula));

    p->conteudo = valor;
    p->prox = NULL;

    //Caso a lista esteja vazia, insere sem outras comparaçoes
    if(*inicio == NULL)
    {
        p->prox = NULL;
        *inicio = p;
    }
    else
    {
        //Inserção simples no final da Lista
        celula *aux;
        aux = *inicio;

        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = p;
    }

}
void retirar(celula **inicio)
{
    celula *p;

    if(*inicio == NULL)
    {
        printf("\nLista Vazia\n");
    }
    else
    {
        celula *aux,*aux2;
        aux = *inicio;

        //Caso haja somente um elemento, libera a memoria e inicio aponta para NULL
        if(aux->prox == NULL)
        {
            free(aux);
            *inicio = NULL;
        }
        else
        {
            //Percorre a lista usando o ponteiro aux2 sempre um elemento atras
            while(aux->prox!=NULL)
            {
                aux2 = aux;
                aux = aux->prox;
            }

            //Removendo no final
            //Ao chegar no final da Lista, o aux2 esta no penultimo elemento
            //Entao liberamos o aux, e aux2 aponta para NULL
            aux2->prox = NULL;
            free(aux);
        }
    }

}
//Função que recebe a posição para print
void mostrar(celula **inicio, int pos)
{
    celula *p;
    int i = 1;

    p = *inicio;

    if(p==NULL)
    {
        printf("\nLista vazia\n");
    }
    else
    {
        //Percorremos ate a posição enviada
        while(i != pos)
        {
            p = p->prox;
            i++;
        }

        printf("Valor: [%d] ",p->conteudo);
    }
}

//Função para a posição digitada ja está ocupada
int existe(celula **inicio,int pos)
{
    celula *aux;
    aux = *inicio;
    int tam = 0;

    //Percorremos a lista completa
    while(aux != NULL)
    {
        aux = aux->prox;
        tam++;
    }

    //Se o tamanho da lista for menor que a posição digitada
    //o indice não foi preechido
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
