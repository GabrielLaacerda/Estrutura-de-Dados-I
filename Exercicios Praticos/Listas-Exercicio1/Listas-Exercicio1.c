#include "Listas-Exercicio1.h"
#include <stdio.h>
#include <stdlib.h>

//Inicia a Fila, apontando para NULL
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

    p = (celula *)malloc(sizeof(celula));

    p->conteudo = valor;
    p->prox = NULL;

    //Realizando a inserção caso não haja nenhum elemento ainda
    if(*inicio == NULL)
    {
        p->prox = NULL;
        *inicio = p;
    }
    else
    {
        //Realizando a inserção no fim, percorrendo os elementos ja existentes
        //Utilizando um ponteiro auxiliar

        celula *aux;
        aux = *inicio;

        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = p;
    }

}

//Função para comparar as duas Listas
int compara_listas(celula **inicio, celula **inicio2)
{
    celula *l1,*l2;
    int tam1 = 0, tam2 = 0,cont = 0;
    int flag = 0;

    l1 = *inicio;
    l2 = *inicio2;

    //Pegamos o tamanho de cada Lista
    while(l1 != NULL)
    {
        l1 = l1->prox;
        tam1++;
    }
    while(l2 != NULL)
    {
        l2 = l2->prox;
        tam2++;
    }
    //Caso o tamanho seja diferente, as listas ja não podem ser iguais
    if(tam1 != tam2)
    {
        printf("\nAs listas sao diferentes\n");
    }
    else
    {
        //Utilizando um ponteiro para cada lista, as percorremos enquanto o contador
        //for menor que a soma dos tamanhos
        l1 = *inicio;
        l2 = *inicio2;

        //Caso alguma posição da lista x seja diferente da mesma posição da lista y
        //a flag muda seu valor
        while(cont < (tam1+tam2))
        {
            if(l1->conteudo == l2->conteudo)
            {
                cont++;
            }
            else
            {
                flag = 1;
                break;
            }
        }

        //Ao final comparamos se ocorreu a mudança da flag
        if(flag == 0)
        {
            printf("As listas sao iguais\n");
        }
        else
        {
            printf("\nAs listas sao diferentes\n");
        }
    }
}
