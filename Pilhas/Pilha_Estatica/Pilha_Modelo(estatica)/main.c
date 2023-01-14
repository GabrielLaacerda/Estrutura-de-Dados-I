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

int main()
{
    int aux;
    pilha p;

    inicia_pilha(&p);

    push(&p,5);
    push(&p,10);
    push(&p,15);
    push(&p,20);
    push(&p,25);
    push(&p,30);
    push(&p,35);
    push(&p,40);
    push(&p,45);
    push(&p,50);

    mostrar_pilha(p);

    push(&p,55);


    return 0;
}
