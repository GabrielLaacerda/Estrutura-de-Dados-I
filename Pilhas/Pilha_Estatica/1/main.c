#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct pilha
{
    int topo;
    int dados[MAX];

} pilha;

void push(pilha *p, int x);
int pop(pilha *p);
void inicia_pilha(pilha *p);
void mostrar_pilha(pilha p);
void soma(pilha p);

void inicia_pilha(pilha *p)
{

    (*p).topo = -1;

}

void push(pilha *p, int x)
{

    if((*p).topo == MAX-1)
    {
        printf("Pilha esta cheia\n");
    }
    else
    {

        (*p).topo++;
        (*p).dados[(*p).topo] = x;

    }
}

int pop(pilha *p)
{

    int valor_retirado;

    if((*p).topo == -1)
    {
        printf("Pilha esta vazia\n");
        return -1;
    }
    else
    {

        valor_retirado = (*p).dados[(*p).topo];
        (*p).topo--;

        return valor_retirado;
    }

}

mostrar_pilha(pilha p)
{

    int aux;

    if(p.topo != -1)
    {

        while(p.topo!=-1)
        {
            aux = pop(&p);
            printf("[%d]\n",aux);

        }
        printf("\n");
    }
    else
    {
        return -1;
    }

}

void soma(pilha p){


    int acm = 0;

    while(p.topo != -1){

        acm += pop(&p);

    }

    printf("\nA soma de todos os valores eh: %d\n",acm);

}

int main()
{
    int aux;
    int num;
    pilha p;

    inicia_pilha(&p);

    printf("Digite 10 valores para a pilha:\n");

    for(int i=0;i<MAX;i++)
    {
        scanf("%d",&num);
        push(&p,num);

    }

    soma(p);

    return 0;
}
