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
    int aux,x,num;
    pilha p,p2,p3;

    inicia_pilha(&p);
    inicia_pilha(&p2);
    inicia_pilha(&p3);

    printf("Quantos numeros deseja ler: ");
    scanf("%d",&x);

    for(int i=0; i<x; i++)
    {
        scanf("%d",&num);
        push(&p,num);
    }

    for(int i=0; i<x; i++)
    {
        aux = pop(&p);

        if(aux < 100)
        {
            push(&p2,aux);
        }
        else
        {
            push(&p3,aux);
        }
    }

    printf("\nPilha 1:\n\n");
    mostrar_pilha(p);

    printf("\nPilha 2:\n\n");
    mostrar_pilha(p2);

    printf("\nPilha 3:\n\n");
    mostrar_pilha(p3);




    return 0;
}
