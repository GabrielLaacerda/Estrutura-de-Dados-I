#include <stdio.h>
#include <stdlib.h>
#include "Filas-Exercicio5.h"

//Inicializa TAD's
void iniciar(celula **inicio)
{
    (*inicio) = NULL;
}

//Inserindo de maneira ordenada para calculo da mediana
void inserir(celula **inicio)
{
    celula *p;
    int valor;

    celula *aux,*aux2;
    aux = *inicio;
    aux2 = aux;

    fflush(stdin);
    printf("Digite o valor: ");
    scanf("%d",&valor);

    p = (celula *)malloc(sizeof(celula));
    p->prox = NULL;

    p->conteudo = valor;

    //
    if(*inicio == NULL)
    {
        p->prox = NULL;
        *inicio = p;
    }
    else if(aux->conteudo > p->conteudo)
    {
        *inicio = p;
        p->prox = aux;
    }
    else
    {
        aux = *inicio;
        aux2 = aux;

        //Enquanto a segunda é maior
        while(aux->conteudo < p->conteudo && aux->prox != NULL)
        {
            aux2 = aux;
            aux = aux->prox;
        }

        //Inserindo no final
        if(aux->conteudo < p->conteudo){
            aux->prox = p;
        }

        //Inserindo no meio
        else{
             aux2->prox = p;
             p->prox = aux;
        }
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
        //Remoção no inicio
        p = (*inicio);
        printf("Elemento removido = %d\n",p->conteudo);

        (*inicio) = p->prox;
        free(p);

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

void mediana(celula **inicio)
{
    celula *aux;
    aux = *inicio;
    int cont = 0;
    int meio,i = 0;
    float med=0;

    if(*inicio == NULL)
    {
        printf("\nFila Vazia\n");
    }
    else
    {
        //Enquanto houver elementos, percorremos a fila incrementando cont
        while(aux != NULL)
        {
            cont++;
            aux = aux->prox;
        }

        //Se tivermos uma quantidade impar de numeros
        if(cont%2==1)
        {
            //Encontramos o indice do elemento central
            meio = cont/2;

            //Voltamos o ponteiro auxiliar para o inicio
            aux = *inicio;

            //Percorremos a fila até o elemento do meio
            while(i<(meio))
            {
                aux = aux->prox;
                i++;
            }
            //A mediana é o próprio elemento
            med = aux->conteudo;
            printf("Mediana: %.0f\n",med);
            system("pause");
        }

        //Se houver uma quantidade par de elementos
        else
        {
            //Encontramos o indice do elemento central
            meio = cont/2;

            //Retornamos o ponteiro auxiliar para o inicio da fila
            aux = *inicio;

            //Percorremos até o primeiro elemento central
            while(i<(meio)-1)
            {
                aux = aux->prox;
                i++;
            }
            //Somamos o primeiro elemento do centro com o segundo e dividimos por 2
            med = aux->conteudo;
            aux = aux->prox;
            med = (med + aux->conteudo)/2;
            printf("Mediana: %.1f\n",med);
            system("pause");
        }

    }
}
